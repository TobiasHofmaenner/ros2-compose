# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_unnamed_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED unnamed_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(unnamed_FOUND FALSE)
  elseif(NOT unnamed_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(unnamed_FOUND FALSE)
  endif()
  return()
endif()
set(_unnamed_CONFIG_INCLUDED TRUE)

# output package information
if(NOT unnamed_FIND_QUIETLY)
  message(STATUS "Found unnamed: 0.0.0 (${unnamed_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'unnamed' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT unnamed_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(unnamed_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${unnamed_DIR}/${_extra}")
endforeach()
