#pragma once

#include "CoreMinimal.h"
#include "RegionInterface.h"

class REGIONANDROID_API AndroidRegionFlag : public IRegionInterface
{
	public:
	AndroidRegionFlag();
	virtual void OpenGallery() override;
#if PLATFORM_ANDROID
	public:
	static struct _JNIEnv *ENV;
	static FOnImageSelectedFromGallery ImageSelectedFromGalleryProxy;
#endif

};
