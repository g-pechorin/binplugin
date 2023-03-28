
> this is not ready

- TODO
	- update the project to the 2018 Unity version
	- build/test/run the cmake project
	- check if the cmake can be uatomated


# Unity 2018.3.14f1 Binary Plugin

Here you will find a successful attempt to create a [Unity Binary Plugin](https://docs.unity3d.com/2018.3/Documentation/Manual/PluginsForDesktop.html)
	Unity 2018.3.14f1 was the oldest version that I had installed on my PC at the time I last updated this in 2023.
	The functionality of the plugin itself is uninteresting; it uses OpenCV to then load an image file at runtime.

I am primatily itnerestid in (updating) this plugin to show **how to call C/++ from Unity** but while I'm here ... the OpenCV method was/is unusual.
	I was building elabourate CMake files at the time, and, this plugin uses one of those to fully download and compile OpenCV so that it can be statically linked.
	Static linking is my preffered approach, but, distributing static linked libraris is ... not a very good idea.

> haven't updated below here


(We're using an `x86` DLL at work - so we're using the `x86` variant that you can get [from the archived builds](http://unity3d.com/get-unity/download/archive))

# Build the binary stuff on Windows

1. Use CMake to build a `Release` `x86` DLL
	* ... and optionally a `Release` `amd64` DLL
1. The configurtaion will copy the DLL into the `project/Assets/Plugin/x86` folder
	* ... you'll have to adjust the build script to put the `amd64` one in the `project/Assets/Plugin/x86_64` if that's what you want
1. [profit!](https://youtu.be/tO5sxLapAts)
