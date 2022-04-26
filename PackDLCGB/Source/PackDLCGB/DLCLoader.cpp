// Fill out your copyright notice in the Description page of Project Settings.


#include "DLCLoader.h"

#include "Engine/AssetManager.h"

TArray<FMapInfo> UDLCLoader::GetMapsInfo()
{
	if(_mapsInfo.Num() == 0)
	{
		ReadDLCMapsInfo();
	}
	return _mapsInfo;
}

bool UDLCLoader::ReadDLCMapsInfo()
{
#if UE_BUILD_SHIPPING
	//
#else
	UAssetManager * assetManager = &UAssetManager::Get();
	TArray<FString> classesToLoad = GetClassesToLoad();
	TArray<FAssetData> RegisteryData;
	if(assetManager->GetAssetRegistry().GetAllAssets(RegisteryData))
	{
		for(FAssetData & data : RegisteryData)
		{
			for(FString classToLoad : classesToLoad)
			{
				if(data.AssetName == FName(*classToLoad))
				{
					UObject * objectToLoad =nullptr;
					auto generatedClassPath = data.TagsAndValues.FindTag(FName("GeneratedClass"));
					if(generatedClassPath.IsSet())
					{
						const FString ClassObjectPath = FPackageName::ExportTextPathToObjectPath(*generatedClassPath.GetValue());
						const FString ClassName = FPackageName::ObjectPathToObjectName(ClassObjectPath);
						objectToLoad = FStringAssetReference(ClassObjectPath).TryLoad();
					} if(objectToLoad) { UBlueprintGeneratedClass* generatedClass = Cast<UBlueprintGeneratedClass>(objectToLoad);
						UMapInfoAsset * mapInfoObject = Cast<UMapInfoAsset>(generatedClass->GetDefaultObject());
						if(mapInfoObject)
							{
								_mapsInfo.Add(mapInfoObject->_mapInfo);
							}
					}
				}
			}
		}
	}
#endif
	LoadDLC();
	return _mapsInfo.Num() >0;
}

TArray<FString> UDLCLoader::LoadDLC()
{
	TArray<FString> LoadedPlugins;
	FString PathToDLCFolder = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) +"DLC";
	UE_LOG(LogTemp, Warning, TEXT("PATH: %s "), *PathToDLCFolder);
	IFileManager& FileManager = IFileManager::Get();
	if(!FPaths::DirectoryExists(PathToDLCFolder))
	{
		UE_LOG(LogTemp, Warning, TEXT("DLC Directory %snot found"), *PathToDLCFolder);
		FileManager.MakeDirectory(*PathToDLCFolder,true);
		return LoadedPlugins;
	}
	// Get all *.pak files and try to load plugins
	TArray<FString> PAKFiles;
	FString DLCExtension ="*.pak";
	FileManager.FindFilesRecursive(PAKFiles, *PathToDLCFolder, *DLCExtension,true,false);
	for (size_t i =0; i < PAKFiles.Num(); i++)
	{
		MountDLC(PAKFiles[i]);
		ReadPakFile(PAKFiles[i]);
	}
#if WITH_EDITOR
	UE_LOG(LogTemp, Warning, TEXT("Run in Editor mode.DLC loading aborted"));
#endif
	return LoadedPlugins;
}

bool UDLCLoader::MountDLC(const FString &PakFilename)
{
	int32 PakOrder = GetDLCOrder(PakFilename);
	FPakPlatformFile* dlcFile = GetDLCFile();
	TArray<FString> mountedPoints1;
	dlcFile->GetMountedPakFilenames(mountedPoints1);
	bool result = dlcFile->Mount(*PakFilename, PakOrder, NULL);
	TArray<FString> mountedPoints2;
	dlcFile->GetMountedPakFilenames(mountedPoints2);
	return result;
}

bool UDLCLoader::UnmountDLC(const FString& PakFilename)
{
	int32 PakOrder = GetDLCOrder(PakFilename);
	FPakPlatformFile* dlcFile = GetDLCFile();
	TArray<FString> mountedPoints1;
	dlcFile->GetMountedPakFilenames(mountedPoints1);
	if(mountedPoints1.Contains(PakFilename))
	{
		UE_LOG(LogTemp, Warning, TEXT("Mount point %s exists!Unmount started..."), *PakFilename);
		if(dlcFile->Unmount(*PakFilename))
		{
			UE_LOG(LogTemp, Warning, TEXT("Unmounted!"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Unmounting error!"));
			return false;
		}
	}
	return true;
}

bool UDLCLoader::ReadPakFile(FString PakFileName)
{
	UE_LOG(LogTemp, Warning, TEXT("ReadPakFile: Mountpak file : %s"), *PakFileName);
	FPakPlatformFile *PakPlatformFile;
	{
		FString PlatformFileName = FPlatformFileManager::Get().GetPlatformFile().GetName();
		if(PlatformFileName.Equals(FString(TEXT("PakFile"))))
		{
			PakPlatformFile = static_cast<FPakPlatformFile*>(&FPlatformFileManager::Get().GetPlatformFile() );
		}
		else
			{ 
			PakPlatformFile =new FPakPlatformFile;
			if (!PakPlatformFile->Initialize(&FPlatformFileManager::Get().GetPlatformFile(), TEXT("")))
			{
				UE_LOG(LogTemp, Error, TEXT("FPakPlatformFilefailed to initialize"));
				return false;
			}
			FPlatformFileManager::Get().SetPlatformFile(*PakPlatformFile);
			}
	}
	FString PakFilePathFull = FPaths::ConvertRelativePathToFull(PakFileName);
	FPakFile PakFile(PakPlatformFile, *PakFilePathFull,false);
	TArray<FString> FileList;
	FString packName = FPaths::GetBaseFilename(PakFileName);
	FString MountPoint = PakFile.GetMountPoint();
	PakFile.FindFilesAtPath(FileList, *MountPoint,true,false,true);
	FStreamableManager StreamableManager;
	for(int32 k =0; k < FileList.Num(); k++)
	{
		FString AssetName = FileList[k];
		if(AssetName.Contains("BP_") && AssetName.Contains(".uasset"))
			{
				UE_LOG(LogTemp, Log, TEXT("Loading Pak: %s fromFile %s ..."), *packName, *FileList[k]);
				FString AssetShortName = FPackageName::GetShortName(AssetName);
				FString FileName, FileExt; AssetShortName.Split(TEXT("."), &FileName, &FileExt);
				FString NewAssetName = FString("/") + packName+"/"+ FileName + TEXT(".") + FileName +"_C";
			UE_LOG(LogTemp, Log, TEXT("Loading Asset %s ..."), *NewAssetName);
			UObject * objectToLoad =nullptr;
			FStringAssetReference ref = FStringAssetReference(NewAssetName);
			UE_LOG(LogTemp, Warning, TEXT("load object..."));
			objectToLoad = ref.TryLoad(); if(objectToLoad)
				{ 
				UBlueprintGeneratedClass* generatedClass = Cast<UBlueprintGeneratedClass>(objectToLoad);
				UMapInfoAsset * mapInfoObject = Cast<UMapInfoAsset>(generatedClass->GetDefaultObject());
				// Take default object by "info" class
				if(mapInfoObject)
				{
					_mapsInfo.Add(mapInfoObject->_mapInfo);
					UE_LOG(LogTemp, Warning, TEXT("Add data %s"), *mapInfoObject->GetFullName());
				}
				else
				{
					UE_LOG(LogTemp, Log, TEXT("File %s loading error!"), *FileList[k]);
				}
				}
			}
	}
	return true;
}