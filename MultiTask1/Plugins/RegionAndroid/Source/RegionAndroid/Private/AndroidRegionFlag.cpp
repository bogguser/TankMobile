#include "AndroidRegionFlag.h"
#if PLATFORM_ANDROID

#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#define DECLARE_JAVA_METHOD(name) \
static jmethodID name = NULL;

DECLARE_JAVA_METHOD(AndroidThunkJava_OpenGallery);

#define INIT_JAVA_METHOD(name, signature) \
if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true)) { 
name = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, #name, signature, false); 
		check(name != NULL); 
		} else { 
			check(0); 
		}
#endif


AndroidRegionFlag::AndroidRegionFlag()
{
#if PLATFORM_ANDROID
	ImageSelectedFromGalleryProxy = OnImageSelected;
	INIT_JAVA_METHOD(AndroidThunkJava_OpenGallery, "()V");
	extern "C"
{
	JNIEXPORT void Java_com_epicgames_ue4_GameActivity_onImageSelected(JNIEnv* jni, jclass clazz, jbyteArray imageBytes)
	{
		AsyncTask(ENamedThreads::GameThread, [=]()
		{
			if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
			{
				jbyte* dataPtr = Env->GetByteArrayElements(imageBytes, NULL);
				jsize len = Env->GetArrayLength(imageBytes);
				TArray<uint8> result((uint8*)dataPtr, (int32)len);
				ImageSelectedFromGalleryProxy.ExecuteIfBound(result);
			} 
		}
		);
	}
}

#endif
	

}

void AndroidRegionFlag::OpenGallery()
{
#if PLATFORM_ANDROID
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv(true))
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, AndroidThunkJava_OpenGallery);
#endif

}
