add_executable(SOCNetworkManager main.cpp)

target_link_libraries(SOCNetworkManager soc_network_manager soc_search_and_replace system glog::glog)

target_include_directories(SOCNetworkManager PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/../messages)
target_include_directories(SOCNetworkManager PRIVATE ../libs)
target_include_directories(SOCNetworkManager PRIVATE ../utils)

link_directories(../messages)

install (TARGETS SOCNetworkManager  DESTINATION bin)