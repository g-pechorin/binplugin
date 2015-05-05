# Unity5 Binary Plugin

Here you will find an attempt to create a [Unity5 Binary Plugin](http://docs.unity3d.com/Manual/PluginsForDesktop.html)

# Build the bianry stuff on Windows

1. Use CMake to build a `Release` `amd64` DLL
	* ... and optionally a `Release` `x86` DLL
1. copy the DLL into the `project/Assets/Plugin/x86_64` folder
	* ... and put the `x86` one in the `project/Assets/Plugin/x86`
1. [profit!](https://youtu.be/tO5sxLapAts)
