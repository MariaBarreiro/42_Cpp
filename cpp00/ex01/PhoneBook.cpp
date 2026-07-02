#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() { this->_contactsCount = 0; }

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
  int position = this->_contactsCount % 8;
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;

  std::cout << "Enter first name: ";
  std::getline(std::cin, firstName);
  std::cout << "Enter last name: ";
  std::getline(std::cin, lastName);
  std::cout << "Enter nickname: ";
  std::getline(std::cin, nickname);
  std::cout << "Enter phone number: ";
  std::getline(std::cin, phoneNumber);
  std::cout << "Enter darkest secret: ";
  std::getline(std::cin, darkestSecret);

  if (firstName.empty() || lastName.empty() || nickname.empty() ||
      phoneNumber.empty() || darkestSecret.empty()) {
    std::cout << DPINK "All fields must be filled." RES << std::endl;
    return;
  }

  this->contacts[position].setFirstName(firstName);
  this->contacts[position].setLastName(lastName);
  this->contacts[position].setNickname(nickname);
  this->contacts[position].setPhoneNumber(phoneNumber);
  this->contacts[position].setDarkestSecret(darkestSecret);

  this->_contactsCount++;
}

std::string truncate(std::string str) {
  if (str.length() > 10)
    return (str.substr(0, 9) + ".");
  return (str);
}

void PhoneBook::searchContact() {
  std::string chosenIndex;
  if (this->_contactsCount == 0) {
    std::cout << DPINK "No contacts available." RES << std::endl;
    return;
  }
  for (int i = 0; i < 8; i++) {
	if (i == 0) {
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << std::endl;
	}
    if (i < this->_contactsCount) {
      std::cout << std::setw(10) << i << "|";
      std::cout << std::setw(10) << truncate(this->contacts[i].getFirstName())
                << "|";
      std::cout << std::setw(10) << truncate(this->contacts[i].getLastName())
                << "|";
      std::cout << std::setw(10) << truncate(this->contacts[i].getNickname())
                << std::endl;
    }
  }
  std::cout << BLUE "Enter the index of the contact you're searching: " RES;
  std::getline(std::cin, chosenIndex);
  if (chosenIndex[0] >= '0' && chosenIndex[0] <= '7' &&
      chosenIndex[0] - '0' < this->_contactsCount && chosenIndex.length() == 1) {
    int x = chosenIndex[0] - '0';
    std::cout << "First name: " << this->contacts[x].getFirstName()
              << std::endl;
    std::cout << "Last name: " << this->contacts[x].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contacts[x].getNickname() << std::endl;
  } else
    std::cout << DPINK "Invalid index." RES << std::endl;
}
