#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
private:
  Contact contacts[8];
  int _contactsCount;

public:
  PhoneBook();
  ~PhoneBook();
  void addContact();
  void searchContact();
};

#endif
