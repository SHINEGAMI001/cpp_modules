/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:14:33 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 16:47:19 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int n, std::string name)
{
	Zombie *zom;
	int i = 0;
	zom = new Zombie[n];
	while (i < n)
	{
		zom[i].set_name(name + "_" + std::to_string(i + 1));
		zom[i].announce();
		i++;
	}
	return zom;

}