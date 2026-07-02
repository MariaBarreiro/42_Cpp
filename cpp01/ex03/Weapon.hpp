#ifndef WEAPON_HPP
#define WEAPON_HPP

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

#include <iostream>

class Weapon {
private:
  std::string _type;

public:
  Weapon(std::string type);
  ~Weapon();

  std::string const &getType(void);
  void setType(std::string type);
};

#endif
