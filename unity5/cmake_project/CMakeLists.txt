cmake_minimum_required (VERSION 3.0)
project(OpenCV-Unity5-plugin)

include(cmade/pal_opencv.cmake)

add_library(
	unity_plugin_with_opencv MODULE
		src/unity_plugin_with_opencv.cpp
		src/unity_plugin_with_opencv.hpp
	)
	target_link_libraries(
		unity_plugin_with_opencv
			opencv_core
			opencv_imgproc
			opencv_highgui
		)

		add_custom_command(TARGET unity_plugin_with_opencv POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:unity_plugin_with_opencv> ${CMAKE_CURRENT_SOURCE_DIR}/../unity_project/Assets/Plugins/unity_plugin_with_opencv.dll
		)
