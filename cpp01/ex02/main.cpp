#include <iostream>

#define BLUE	"\033[38;2;78;76;118m"
#define PURPLE	"\033[38;2;144;133;188m"
#define LPINK	"\033[38;2;242;203;224m"
#define PINK	"\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

int main(int ac, char **av) {
  (void)av;
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  if (ac != 1) {
    std::cout << BLUE "Correct usage: ./Brain" RES << std::endl;
    return (1);
  }

  std::cout << PURPLE "Memory adress of the string variable: " << &str << RES << std::endl;
  std::cout << PINK "Memory adress held by stringPTR: " << stringPTR << RES << std::endl;
  std::cout << BLUE "Memory adress held by stringREF: " << &stringREF << RES << std::endl;
  std::cout << PURPLE "Value of the string variable: " << str << RES << std::endl;
  std::cout << PINK "Value pointed to by stringPTR: " << *stringPTR << RES << std::endl;
  std::cout << BLUE "Value pointed to by stringPTR: " << stringREF << RES << std::endl;

  return (0);
}
