# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\consoleapp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\consoleapp_autogen.dir\\ParseCache.txt"
  "consoleapp_autogen"
  )
endif()
