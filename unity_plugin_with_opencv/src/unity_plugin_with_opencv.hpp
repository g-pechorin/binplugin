/*
	This macro tells the compiler to create the function in such a way that Unity (or Unity's P/Invoke) can find it in the DLL
*/


#if !defined(EXPORT_API)
#	if _MSC_VER // this is defined when compiling with Visual Studio
#		define EXPORT_API extern "C" __declspec(dllexport) // Visual Studio needs annotating exported functions with this
#	else
#		define EXPORT_API extern "C" // XCode does not need annotating exported functions, so define is empty
#	endif
#endif