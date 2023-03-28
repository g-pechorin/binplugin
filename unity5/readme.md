
This is a pair of projects showing how to invoke C/++ from Unity3D.
	Specifically - this is a CMake project that produces a `.dll` and a Unity3D project that executes that function.
	The C/++ project uses the OpenCV library to decode a blob of binary data.
	The Unity3D project waits for a `Fire1` input before invoking the native code to decode some inage data and display it.

# Unity 2018.3.14f1 Binary Plugin

Here you will find a successful attempt to create a [Unity Binary Plugin](https://docs.unity3d.com/2018.3/Documentation/Manual/PluginsForDesktop.html)
	Unity 2018.3.14f1 was the oldest version that I had installed on my PC at the time I last updated this in 2023.
	The functionality of the plugin itself is uninteresting; it uses OpenCV to then load an image file at runtime.

I am primarily interested in (updating) this plugin to show **how to call C/++ from Unity** but while I'm here ... the OpenCV method was/is unusual.
	I was building elaborate CMake files at the time, and, this plugin uses one of those to fully download and compile OpenCV so that it can be statically linked.
		At ths time of this writing (2023) I'd preffer [fips](https://floooh.github.io/fips/) (or eventualy [fibs](https://github.com/floooh/fibs)) for this sort of C/++ automation.
		For the time being though ... this works as-is so I'd say just "leave it" as is.
	Static linking is my preferred approach, but, distributing statically linked libraries is ... not a very good idea.

With the provenance out of the way, usage is simple; build the `.dll` and run the example scene.
	Configuring the CMake projects will take longer than usual and will need to download files via HTTP.
	Once configured, one should generate the projects, open the project (in Visual Studio) and build the release build.
	Once that's done - the `.dll` should be in place, so, open the Unity project to run the `TestOpenCV` scene and click the mouse button (or otherwise `Fire1`) to switch the texture on the cube in front of the camera.

# Building / Editing the C/++ / CMake Project

1. get CMake and Visual Studio installed (on Windows)
	- I'm using Visual Studio 16 aka 2019 with the C++ "stuff"
		- I'm not sure if older or newer versions would work; I wouldn't be surprised
	- I'm using CMake 3.24.0
		- I suspect that newer versions will eventually not-work; this is based on warning emssages I see
2. open the CMake GUI, use the configure button to setup some folder, then generate and open the project
3. build the `unity_plugin_with_opencv` module from Visual Studio
	- the Visual C++ workspace will have a lot of projects
	- we only care about the `unity_plugin_with_opencv` one
	- when you build it it will compile and libraries
4. close Visual C++ and open the Unity project
5. run the scene and press `Fire1` to switch the texture
	- this works fine in the editor

# Purpose of this

On it's own this isn't very useful, rather it was intended to be a stepping stone to some other project using OpenCV and Unity5.
	In the five years since ... I've forgotten if that project was ever attempted or not.
	At this point, I intend to copy basic project files out of this, remove OpenCV, and use it to integrate an ultrasonic range sensor.
