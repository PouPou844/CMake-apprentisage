add_library(mathlib src/test.cpp)

target_include_directories(mathlib 
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)
