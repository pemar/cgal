# Created by the script cgal_create_cmake_script
# This is the CMake script for compiling a CGAL application.

project (L1_Voronoi_diagram_2_Demo)

cmake_minimum_required(VERSION 2.8.11)
if(POLICY CMP0043)
  cmake_policy(SET CMP0043 OLD)
endif()

find_package(CGAL COMPONENTS Qt5)

include(${CGAL_USE_FILE})

find_package(Qt5 QUIET COMPONENTS Xml Script OpenGL Svg)
include_directories (BEFORE ../../include)
include_directories (BEFORE ./include)


if ( CGAL_FOUND AND CGAL_Qt5_FOUND AND Qt5_FOUND )

add_definitions(-DQT_NO_KEYWORDS)

#--------------------------------
# The "L1 Voronoi diagram" demo: L1_voronoi_diagram_2
#--------------------------------
# UI files (Qt Designer files)
qt5_wrap_ui( DT_UI_FILES L1_voronoi_diagram_2.ui )

# qrc files (resources files, that contain icons, at least)
qt5_add_resources ( CGAL_Qt5_RESOURCE_FILES ./L1_voronoi_diagram_2.qrc )

# use the Qt MOC preprocessor on classes that derives from QObject
qt5_generate_moc( L1_voronoi_diagram_2.cpp L1_voronoi_diagram_2.moc )

# The executable itself.
add_executable  ( L1_voronoi_diagram_2 L1_voronoi_diagram_2.cpp L1_voronoi_diagram_2.moc ${DT_UI_FILES}  ${CGAL_Qt5_RESOURCE_FILES} ${CGAL_Qt5_MOC_FILES} )

qt5_use_modules(L1_voronoi_diagram_2 Xml Script OpenGL Svg)

add_to_cached_list( CGAL_EXECUTABLE_TARGETS L1_voronoi_diagram_2 )

# Link with Qt libraries
target_link_libraries( L1_voronoi_diagram_2 ${QT_LIBRARIES} )
# Link with CGAL
target_link_libraries( L1_voronoi_diagram_2 ${CGAL_LIBRARIES} ${CGAL_3RD_PARTY_LIBRARIES})

else()

  message(STATUS "NOTICE: This demo requires CGAL and Qt5, and will not be compiled.")

endif()
