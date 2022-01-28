cmake_minimum_required(VERSION 3.19)
project(nixos-installer-gui VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_AUTOUIC_SEARCH_PATHS forms)

find_package(Qt5 COMPONENTS Widgets LinguistTools REQUIRED)

# Find all the project files.
file(GLOB_RECURSE FORMS CONFIGURE_DEPENDS  ${CMAKE_CURRENT_SOURCE_DIR}/forms/*.ui)
file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS  ${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS  ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)


#set(SOURCES
#  source/main.cpp
#  source/main_window.cpp
#  source/storage_widget.cpp
#)

#set(HEADERS
#  include/main_window.hpp
#  include/storage_widget.hpp
#)

#set(FORMS
#  forms/main_window.ui
#  forms/storage_widget.ui
#)

include_directories(include)
add_executable(nixos-installer-gui ${SOURCES} ${HEADERS} ${FORMS})
target_link_libraries(nixos-installer-gui Qt5::Widgets)
