#include "network_manager.hpp"
soccentric::network::NetworkManager::NetworkManager() {}
soccentric::network::NetworkManager::NetworkManager(const std::string &ip_address_aux,
                                                    const std::string &ip_address,
                                                    const std::string &gateway)
    : _ipAddressAux(ip_address_aux), _ipAddress(ip_address), _gateway(gateway) {}
const std::string &soccentric::network::NetworkManager::getIpAddressAux() const {
  return _ipAddressAux;
}
void soccentric::network::NetworkManager::setIpAddressAux(const std::string &ip_address_aux) {
  _ipAddressAux = ip_address_aux;
}
const std::string &soccentric::network::NetworkManager::getIpAddress() const {
  return _ipAddress;
}
void soccentric::network::NetworkManager::setIpAddress(const std::string &ip_address) {
  _ipAddress = ip_address;
}
const std::string &soccentric::network::NetworkManager::getGateway() const {
  return _gateway;
}
void soccentric::network::NetworkManager::setGateway(const std::string &gateway) {
  _gateway = gateway;
}
