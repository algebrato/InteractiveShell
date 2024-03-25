cmake_minimum_required (VERSION 3.1)
project ("InteractiveShell" VERSION 0.0.1 LANGUAGES C CXX)
set(CMAKE_BUILD_TYPE Debug)

if(UNIX)
  set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fPIC")
  include(GNUInstallDirs)
elseif (WIN32)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING)
  set (CMAKE_CXX_FLAGS_DEBUG  "${CMAKE_CXX_FLAGS} /std:c++17 /EHsc /MTd")
endif(UNIX)

file (GLOB_RECURSE SRC_FILES HEADER_FILES
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/include/*.h
)

# Create libshell library
add_library(libshell ${SRC_FILES} ${HEADER_FILES})
target_include_directories(libshell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Create InteractiveShell executable, and link it with libshell
add_executable(InteractiveShell tools/InteractiveShell.cpp)
target_include_directories(InteractiveShell PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(InteractiveShell libshell)

