//
// Created by sande on 6/13/2019.
//

#include "search_and_replace.hpp"

soccentric::utils::SearchAndReplace::SearchAndReplace(const std::string &file_name) : _fileName(file_name) {}
soccentric::utils::SearchAndReplace::SearchAndReplace(const std::string &file_name, const std::string &path)
    : _fileName(file_name), _path(path) {}
bool soccentric::utils::SearchAndReplace::find(std::string token) {
  return false;
}
uint32_t soccentric::utils::SearchAndReplace::findNumberofInstant(std::string token) {
  return 0;
}
bool soccentric::utils::SearchAndReplace::replace(std::string token, std::string value) {
  return false;
}
bool soccentric::utils::SearchAndReplace::replaceFirst(std::string token, std::string value) {
  return false;
}
bool soccentric::utils::SearchAndReplace::replaceLast(std::string token, std::string value) {
  return false;
}
bool soccentric::utils::SearchAndReplace::_open() {
  return false;
}
bool soccentric::utils::SearchAndReplace::_close() {
  return false;
}
