#include "inc/Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}


void Harl::debug(void) {
  std::cout << BLUE "It compiled on the first try." << std::endl;
  std::cout << "This is suspicious" RES << std::endl;
}

void Harl::info(void) {
  std::cout << LPINK "Running program..." << std::endl;
  std::cout << "pretending I know what I'm doing." RES << std::endl;
}

void Harl::warning(void) {
  std::cout << DPINK
      "Memory usage is climbing faster than my confidence is falling." RES
            << std::endl;
}

void Harl::error(void) {
  std::cout << PURPLE "Segmentation fault." << std::endl;
  std::cout << "The computer has chosen violence" RES << std::endl;
}

void	complain(std::string level){
	std::string functions[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[]) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if (functions == functions[i])
	}
}
