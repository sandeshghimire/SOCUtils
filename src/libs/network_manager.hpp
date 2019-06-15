#include <iostream>

#pragma  once

namespace soccentric {
namespace network {
class NetworkManager {
 public:
  NetworkManager();
  NetworkManager(const std::string &ip_address_aux, const std::string &ip_address, const std::string &gateway);
  const std::string &getIpAddressAux() const;
  void setIpAddressAux(const std::string &ip_address_aux);
  const std::string &getIpAddress() const;
  void setIpAddress(const std::string &ip_address);
  const std::string &getGateway() const;
  void setGateway(const std::string &gateway);

 private:
  std::string _ipAddressAux;
  std::string _ipAddress;
  std::string _gateway;
};
}
}
