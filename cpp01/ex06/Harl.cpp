#include "inc/Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level){
	int	index = -1;
	std::string levels[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++){
		if (level == levels[i]){
			index = i;
			break ;
		}
	}

	switch (index) {
		case 0:
			(this->*functions[0])();
		case 1:
			(this->*functions[1])();
		case 2:
			(this->*functions[2])();
		case 3:
			(this->*functions[3])();
			break ;
		default:
		std::cout << PINK "[Probably complaining about insignificant problems]" RES << std::endl;
	
	}
}
void Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
  std::cout << BLUE "It compiled on the first try." << std::endl;
  std::cout << "This is suspicious." RES << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
  std::cout << LPINK "Running program..." << std::endl;
  std::cout << "pretending I know what I'm doing." RES << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
  std::cout << DPINK
      "Memory usage is climbing faster than my confidence is falling." RES
            << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
  std::cout << PURPLE "Segmentation fault." << std::endl;
  std::cout << "The computer has chosen violence." RES << std::endl;
}

