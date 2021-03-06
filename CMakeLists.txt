CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

#SET(PROJ_NAME CPMPF)
PROJECT(CPMPF)
ADD_DEFINITIONS(-DWITH_SSE)

set (CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

FIND_PACKAGE(OpenCV REQUIRED)
FIND_PACKAGE(LAPACK REQUIRED)
FIND_PACKAGE(OpenMP REQUIRED)

INCLUDE_DIRECTORIES(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CPM_SOURCE_DIR}
    ${PFilter_SOURCE_DIR}
    ${Variational_refinement_SOURCE_DIR}
    ${OpenCV_INCLUDE_DIRS}
)

ADD_SUBDIRECTORY(CPM)
ADD_SUBDIRECTORY(PFilter)
ADD_SUBDIRECTORY(Variational_refinement)
ADD_SUBDIRECTORY(Mains)
