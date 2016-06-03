# Unity5 Binary Plugin

Here you will find an successful attempt to create a [Unity5 Binary Plugin](http://docs.unity3d.com/Manual/PluginsForDesktop.html)

(We're using an `x86` DLL at work - so we're using the `x86` variant that you can get [from the archived builds](http://unity3d.com/get-unity/download/archive))

# Build the binary stuff on Windows

1. Use CMake to build a `Release` `x86` DLL
	* ... and optionally a `Release` `amd64` DLL
1. The configurtaion will copy the DLL into the `project/Assets/Plugin/x86` folder
	* ... you'll have to adjust the build script to put the `amd64` one in the `project/Assets/Plugin/x86_64` if that's what you want
1. [profit!](https://youtu.be/tO5sxLapAts)
