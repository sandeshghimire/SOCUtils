#pragma  once

#include <string>
#include <regex>

namespace soccentric {
namespace utils {

class SearchAndReplace {

 public:
  SearchAndReplace(const std::string &file_name);
  SearchAndReplace(const std::string &file_name, const std::string &path);

  bool find(std::string token);
  uint32_t  findNumberofInstant(std::string token);

  bool replace(std::string token, std::string value);
  bool replaceFirst(std::string token, std::string value);
  bool replaceLast(std::string token, std::string value);

 private:
  bool _open();
  bool _close();

 private:
  std::string _fileName;
  std::string _path;
};

}
}
