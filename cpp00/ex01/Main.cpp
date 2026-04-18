#include "inc/PhoneBook.hpp"

int main(int ac, char **av) {
  (void)av;
  std::string inputCmd;
  PhoneBook phonebook;

  if (ac != 1) {
    std::cout << "Correct usage: ./phonebook" << std::endl;
    return (1);
  } else {
    while (1) {
      std::cout << "Available commands: ADD, SEARCH, EXIT." << std::endl;
      std::cout << "Enter command: ";
      if (!std::getline(std::cin, inputCmd)) {
        if (std::cin.eof()) {
          std::cout << std::endl;
          break;
        }
      } else if (inputCmd == "EXIT") {
        std::cout << "Exiting PhoneBook." << std::endl;
        break;
      } else if (inputCmd == "ADD") {
        std::cout << "Adding contact." << std::endl;
        phonebook.addContact();
      } else if (inputCmd == "SEARCH")
        phonebook.searchContact();
      else
        std::cout << "Invalid command." << std::endl;
    }
  }
  return (0);
}
