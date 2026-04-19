#include "inc/PhoneBook.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string inputCmd;
  PhoneBook phonebook;

  if (ac != 1) {
    std::cout << DPINK "Correct usage: ./phonebook" RES << std::endl;
    return (1);
  } else {
    while (1) {
      std::cout << PINK "Available commands: ADD, SEARCH, EXIT." RES << std::endl;
      std::cout << PINK "Enter command: " RES;
      if (!std::getline(std::cin, inputCmd)) {
        if (std::cin.eof()) {
          std::cout << std::endl;
          break;
        }
      } else if (inputCmd == "EXIT") {
        std::cout << DPINK "Exiting PhoneBook." RES << std::endl;
        break;
      } else if (inputCmd == "ADD") {
        std::cout << PURPLE "Adding contact." RES << std::endl;
        phonebook.addContact();
      } else if (inputCmd == "SEARCH")
        phonebook.searchContact();
      else
        std::cout << DPINK "Invalid command." RES << std::endl;
    }
  }
  return (0);
}
