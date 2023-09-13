#pragma once

#ifdef WIN32
	#define SH_WINDOW
#elif defined(__unix__)
	#define SH_UNIX

	#ifdef __linux__
		#define SH_LINUX
	#else
		#error Unknow unix system
	#endif
#else
	#error Unknow system
#endif

#ifdef SH_WINDOW
	#define __SH_EXPORT __declspec(dllexport)
	#define __SH_IMPORT __declspec(dllimport)
#else
	#define __SH_EXPORT __attribute__((visibility("default")))
	#define __SH_IMPORT __attribute__((visibility("default")))
#endif

#ifdef SH_EXPORT
	#define SH __SH_EXPORT
#else
	#define SH __SH_IMPORT
#endif
