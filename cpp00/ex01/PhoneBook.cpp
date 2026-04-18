#include "inc/PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() { this->contactsCount = 0; }

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
  int position = this->contactsCount % 8;
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
    std::cout << "All fields must be filled." << std::endl;
    return;
  }

  this->contacts[position].setFirstName(firstName);
  this->contacts[position].setLastName(lastName);
  this->contacts[position].setNickname(nickname);
  this->contacts[position].setPhoneNumber(phoneNumber);
  this->contacts[position].setDarkestSecret(darkestSecret);

  this->contactsCount++;
}

void PhoneBook::searchContact() {
  if (this->contactsCount == 0) {
    std::cout << "No contacts available." << std::endl;
    return;
  }
}
