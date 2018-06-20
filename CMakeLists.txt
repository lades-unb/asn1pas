# asn1pas module

# Additional Include Directories
include_directories(include)

# Get the source files
file(GLOB FILES src/*.c)
set(SOURCES ${FILES})

# Output
add_library(asn1pas ${SOURCES})
