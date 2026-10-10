# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\simpleCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\simpleCalculator_autogen.dir\\ParseCache.txt"
  "simpleCalculator_autogen"
  )
endif()
