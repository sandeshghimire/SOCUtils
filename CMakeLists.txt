cmake_minimum_required(VERSION 3.0)

### Hunter snapshot that will be used ###

include("cmake/HunterGate.cmake")
HunterGate(
        URL "https://github.com/ruslo/hunter/archive/v0.23.111.tar.gz"
        SHA1 "4189bbd869abe4eb69b5303d3f916c03d34dc154"
)
project(SocCentricNetworkManager)

set(CMAKE_CXX_STANDARD 14)
set (MAJOR 0)
set (MINOR 0)
set (PATCH 1)

set (GrandCentral_VERSION "${MAJOR}.${MINOR}.${PATCH}")


### Download dependencies ###
hunter_add_package(GTest)
hunter_add_package(ZeroMQ)
hunter_add_package(PocoCpp)
hunter_add_package(ZMQPP)
hunter_add_package(CapnProto)
hunter_add_package(crc32c)
hunter_add_package(glog)

### Find dependencies ###
find_package(GTest CONFIG REQUIRED) # GTest::main
find_package(Poco REQUIRED Foundation CONFIG)
find_package(ZeroMQ CONFIG REQUIRED)
find_package(ZMQPP CONFIG REQUIRED)
find_package(CapnProto CONFIG REQUIRED)
find_package(crc32c CONFIG REQUIRED)
find_package(glog CONFIG REQUIRED)

add_subdirectory(src)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)


############################################################
# Create DEB
############################################################

# Tell CPack to generate a .deb package
set(CPACK_GENERATOR "DEB")

# Set a Package Maintainer.
# This is required
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Sandesh J. Ghimire ")

# Set a Package Version
set(CPACK_PACKAGE_VERSION ${GrandCentral_VERSION})

# Include CPack
include(CPack)

