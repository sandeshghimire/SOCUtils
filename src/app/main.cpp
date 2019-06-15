#include <iostream>
#include <iomanip>

#include <glog/logging.h>
#include <system.capnp.h>

#include <network_manager.hpp>
#include <search_and_replace.hpp>

using namespace soccentric::network;
using namespace soccentric::utils;

int main(int argc, char **argv) {

  std::string config_file ("file.txt");

  NetworkManager network_manager;
  SearchAndReplace search_and_replace(config_file);

  return 0;
}
