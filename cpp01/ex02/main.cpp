#include <iostream>

int main(int ac, char **av) {
  (void)av;
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  if (ac != 1) {
    std::cout << "Correct usage: ./Brain" << std::endl;
    return (1);
  }

  std::cout << "Memory adress of the string variable: " << &str << std::endl;
  std::cout << "Memory adress held by stringPTR: " << stringPTR << std::endl;
  std::cout << "Memory adress held by stringREF: " << &stringREF << std::endl;
  std::cout << "Value of the string variable: " << str << std::endl;
  std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
  std::cout << "Value pointed to by stringPTR: " << stringREF << std::endl;

  return (0);
}
