#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 1)
	{
		std::cout << "Correct usage: ./phonebook" << std::endl;
		return (1);
	}
	else
	{
		while(1)
		{
			std::cout << "Available commands: ADD, SEARCH, EXIT." <<std::endl;
			std::cout << "Enter command:" <<std::endl;
		}
	}
	return (0);
}
