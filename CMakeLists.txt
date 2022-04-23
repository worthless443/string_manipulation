project(strmpl)

file(GLOB Source "${CMAKE_CURRENT_SOURCE_DIR}/src/strmpl.cpp")
file(GLOB Include "${CMAKE_CURRENT_SOURCE_DIR}/include/*")

add_executable(strtar ${Source})
target_include_directories(strtar PUBLIC ${Include}
	"${CMAKE_CURRENT_SOURCE_DIR}/curlpp/include")
target_link_libraries(strtar
	"${CMAKE_CURRENT_SOURCE_DIR}/curlpp/build/libmain.so"
	/usr/lib64/libcurl.so "${CMAKE_CURRENT_SOURCE_DIR}/fmt/libfmt.a")
