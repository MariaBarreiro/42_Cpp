#include "inc/Sed.hpp"
#include <fstream>
#include <string>

void sed(std::string filename, std::string s1, std::string s2) {

  if (s1.empty()) {
    std::cout << DPINK "String 1 is empty" RES << std::endl;
    return;
  }

  std::ifstream file;
  file.open(filename.c_str());
  if (!file.is_open()) {
    std::cout << DPINK "Error opening the file " << filename << RES
              << std::endl;
    return;
  }

  std::string outFile = filename + ".replace";
  std::ofstream newFile(outFile.c_str());
  if (!newFile.is_open()) {
    std::cout << DPINK "Could not create file " << outFile << RES << std::endl;
    return;
  }
  std::string str;
  while (std::getline(file, str)) {
    std::string res;
    size_t i = 0;
    size_t found = str.find(s1, i);
    while (found != std::string::npos) {
      res += str.substr(i, found - i);
      res += s2;
      i = found + s1.length();
      found = str.find(s1, i);
    }
    res += str.substr(i);
    newFile << res << std::endl;
  }
  file.close();
  newFile.close();
}
