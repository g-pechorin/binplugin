cmake_minimum_required (VERSION 2.6)
project(Unity5BinaryPlugin)

add_library(
	Foober MODULE 
		src/foober.hpp
		src/foober.cpp
	)