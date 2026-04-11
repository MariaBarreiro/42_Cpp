/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 13:10:26 by mda-enca          #+#    #+#             */
/*   Updated: 2026/04/11 14:22:37 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" >> std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string argv = av[i];
		for (j = 0; j < argv.length())
	}

	return (0);
}
