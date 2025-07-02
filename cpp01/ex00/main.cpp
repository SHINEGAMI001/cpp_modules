/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:55:05 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 23:07:55 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nbr;
	int i;
	std::cout << "Enter number of Zombies :";
	std::cin >> nbr;
	if (std::cin.fail())
		std::cout << "Failed.." << std::endl;
	else
	{
		std::cin.ignore(INT_MAX, '\n');
		std::string name[nbr];
		i = 0;
		while (i < nbr)
		{
			std::cout << "Name of zombie number " << i + 1 << "/" << nbr << " :";
			std::getline(std::cin, name[i]);
			i++;
		}
		randomChump(name[rand()%nbr]);
		
	}
	return 0;
}