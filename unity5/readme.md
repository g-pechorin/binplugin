
> this is not ready

- TODO
	- [x] update the project to the 2018 Unity version
	- [x] build/test/run the cmake project
		- [x] build it
			- it's curently building the x64 dll into an x86 dir
			- ... but ... otherwise looks fine
			- ... and unity doesn't seem to care ...
		- [ ] get it to work with the Unity project
	- [ ] check if the cmake can be automated
		- [ ] get the correct file into the correct place
			- need to check targets
			- can i set VS's default tagets?
			- ... maybe just provide a `.bat` file
	- [ ] strip and remove code and files from the project
		- current goal is 50% of the files
	- [ ] revise the documentation

# Unity 2018.3.14f1 Binary Plugin

Here you will find a successful attempt to create a [Unity Binary Plugin](https://docs.unity3d.com/2018.3/Documentation/Manual/PluginsForDesktop.html)
	Unity 2018.3.14f1 was the oldest version that I had installed on my PC at the time I last updated this in 2023.
	The functionality of the plugin itself is uninteresting; it uses OpenCV to then load an image file at runtime.

I am primarily interested in (updating) this plugin to show **how to call C/++ from Unity** but while I'm here ... the OpenCV method was/is unusual.
	I was building elaborate CMake files at the time, and, this plugin uses one of those to fully download and compile OpenCV so that it can be statically linked.
		At ths time of this writing (2023) I'd preffer [fips](https://floooh.github.io/fips/) (or eventualy [fibs](https://github.com/floooh/fibs)) for this sort of C/++ automation.
		For the time being though ... this works as-is so I'd say just "leave it" as is.
	Static linking is my preferred approach, but, distributing statically linked libraries is ... not a very good idea.


With the provenance out of the way, usage is simple; run the `TestOpenCV` scene and click the mouse button (or otherwise `Fire1`) to switch the texture on the cube in front of the camera.
	Generating the CMake projects will take longer than usual and will need to download files via HTTP.


# Building / Editing the C/++ / CMake Project

1. get CMake and Visual Studio installed (on Windows)
	- I'm using Visual Studio 16 aka 2019 with the C++ "stuff"
		- I'm not sure if older or newer versions would work; I wouldn't be surprised
	- I'm using CMake 3.24.0
		- I suspect that newer versions will eventually not-work; this is based on warning emssages I see

> undated

(We're using an `x86` DLL at work - so we're using the `x86` variant that you can get [from the archived builds](http://unity3d.com/get-unity/download/archive))

# Build the binary stuff on Windows

1. Use CMake to build a `Release` `x86` DLL
	* ... and optionally a `Release` `amd64` DLL
1. The configuration will copy the DLL into the `project/Assets/Plugin/x86` folder
	* ... you'll have to adjust the build script to put the `amd64` one in the `project/Assets/Plugin/x86_64` if that's what you want
1. [profit!](https://youtu.be/tO5sxLapAts)
