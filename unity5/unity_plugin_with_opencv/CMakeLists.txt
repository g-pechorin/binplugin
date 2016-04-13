cmake_minimum_required (VERSION 2.6)
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
			opencv_calib3d
			opencv_contrib
			opencv_features2d
			opencv_flann
			opencv_gpu
			#opencv_highgui
			#opencv_imgproc
			opencv_legacy
			opencv_ml
			opencv_nonfree
			opencv_objdetect
			opencv_ocl
			opencv_photo
			opencv_stitching
			opencv_superres
			opencv_ts
			opencv_video
			opencv_videostab
		)