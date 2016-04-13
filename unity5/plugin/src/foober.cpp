#if !defined(EXPORT_API)
#	if _MSC_VER // this is defined when compiling with Visual Studio
#		define EXPORT_API extern "C" __declspec(dllexport) // Visual Studio needs annotating exported functions with this
#	else
#		define EXPORT_API extern "C" // XCode does not need annotating exported functions, so define is empty
#	endif
#endif

// declare the function (may be redundant)
EXPORT_API float foo(void);

// ...

// implement the function
EXPORT_API float foo(void)
{
	return 3.14f;
}
