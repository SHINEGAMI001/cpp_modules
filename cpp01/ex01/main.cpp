/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:42:32 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 23:07:32 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zom;
	int n;
	std::string name;

	std::cout << "Enter Number Of Zombies :";
	std::cin >> n;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Failed.." << std::endl;
	}
	std::cout << "Enter Name of your Zombies : ";
	std::getline(std::cin, name);
	zom = ZombieHorde(n, name);
	delete []zom;
	return 0;
}