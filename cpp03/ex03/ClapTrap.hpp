#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define BLUE "\033[38;2;78;76;118m"
#define PURPLE "\033[38;2;144;133;188m"
#define LPINK "\033[38;2;242;203;224m"
#define PINK "\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

#include <iostream>

class ClapTrap {
protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;

public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
#endif
