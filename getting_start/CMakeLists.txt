# this is my first cmake CMakeLists.txt file
cmake_minimum_required(VERSION 3.10)

# project name
project(Hello VERSION 1.0.0)

# project build
set(PROJECT_VERSION_BUILD 100)  


# specify the c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(	"${CMAKE_CURRENT_SOURCE_DIR}/HelloConfig.h.in" 
				"${CMAKE_CURRENT_BINARY_DIR}/HelloConfig.h"
				@ONLY
			)


add_executable( Hello main.cpp
					 CMain.cpp )

target_include_directories( Hello PUBLIC "${CMAKE_CURRENT_BINARY_DIR}" ) 
