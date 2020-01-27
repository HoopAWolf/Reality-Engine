#pragma once

#ifdef RT_PLATFORM_WINDOWS
	#ifdef RT_BUILD_DLL
		#define REALITY_API __declspec(dllexport)
	#else
		#define REALITY_API __declspec(dllimport)
	#endif
#else
	#error Reality only supports Windows for now!
#endif