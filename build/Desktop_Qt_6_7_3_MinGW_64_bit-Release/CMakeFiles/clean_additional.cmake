# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Macro_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Macro_autogen.dir\\ParseCache.txt"
  "Macro_autogen"
  )
endif()
