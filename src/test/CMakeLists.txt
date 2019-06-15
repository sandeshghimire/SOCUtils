add_executable(network_manager_test network_manager_test.cpp)
target_link_libraries(network_manager_test PUBLIC GTest::main)

### Testing ###
enable_testing()