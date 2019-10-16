project(sut)

set(HEADER_FILES
        definitions.h
        )


set(SOURCE_FILES
        implementation_a.cpp 
	implementation_b.cpp 
	implementation_c.cpp
        )

add_library(sut_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})
