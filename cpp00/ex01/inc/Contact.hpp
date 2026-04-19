#ifndef CONTACT_HPP
#define CONTACT_HPP

#define BLUE	"\033[38;2;59;57;93m"
#define PURPLE	"\033[38;2;144;133;188m"
#define LPINK	"\033[38;2;242;203;224m"
#define PINK	"\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

#include <string>

class Contact {
private:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;

public:
  Contact();
  ~Contact();

  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setNickname(std::string nickname);
  void setPhoneNumber(std::string phoneNumber);
  void setDarkestSecret(std::string darkestSecret);

  std::string getFirstName();
  std::string getLastName();
  std::string getNickname();
};

#endif
