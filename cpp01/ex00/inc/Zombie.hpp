#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define BLUE	"\033[38;2;78;76;118m"
#define PURPLE	"\033[38;2;144;133;188m"
#define LPINK	"\033[38;2;242;203;224m"
#define PINK	"\033[38;2;203;109;154m"
#define DPINK "\033[38;2;143;71;123m"
#define RES "\033[0m"

#include <iomanip>
#include <iostream>
#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie(std::string name);
  ~Zombie();

  void announce(void);
  static Zombie *newZombie(std::string name);
};

void randomChump(std::string name);

#endif
