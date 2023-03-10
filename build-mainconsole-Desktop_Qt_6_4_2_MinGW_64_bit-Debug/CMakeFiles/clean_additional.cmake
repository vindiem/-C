# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\mainconsole_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\mainconsole_autogen.dir\\ParseCache.txt"
  "mainconsole_autogen"
  )
endif()
