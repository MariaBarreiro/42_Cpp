#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

void sed(std::string filename, std::string s1, std::string s2);

#endif
