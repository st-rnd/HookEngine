#pragma once
#define HOOKENGINE_LIB_NAME "HookEngine"

#ifdef _WIN64
#define HOOKENGINE_PLATFORM "x64"
#else
#define HOOKENGINE_PLATFORM "x86"
#endif

#if _MSC_VER == 1800
#define HOOKENGINE_TOOLSET "v120"
#elif _MSC_VER == 1600
#define HOOKENGINE_TOOLSET "v100"
#else 
#define HOOKENGINE_TOOLSET "unknowntoolset"
#endif

#ifdef _DLL
#define HOOKENGINE_RUNTIME "md"
#else
#define HOOKENGINE_RUNTIME "mt"
#endif

#ifdef _DEBUG
#define HOOKENGINE_DEBUG "-d"
#else
#define HOOKENGINE_DEBUG ""
#endif


#define HOOKENGINE_LIB_FULL_NAME HOOKENGINE_LIB_NAME HOOKENGINE_PLATFORM "-" HOOKENGINE_TOOLSET "-" HOOKENGINE_RUNTIME HOOKENGINE_DEBUG ".lib"
// INFO debug log
//#pragma message ("Linking to lib file: " HOOKENGINE_LIB_FULL_NAME)

#pragma comment(lib, HOOKENGINE_LIB_FULL_NAME)
