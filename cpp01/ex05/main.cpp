#include "inc/Harl.hpp"

int	 main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cout << PURPLE "Correct usage: ./Harl" RES << std::endl;
		return (1);
	}
}
