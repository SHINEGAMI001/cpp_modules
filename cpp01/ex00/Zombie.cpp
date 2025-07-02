/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 20:23:04 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/27 18:53:34 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Constractor Init\n";
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " Diconstractor\n";
}

void	Zombie::setname(std::string name)
{
	this->name = name;
}

std::string		Zombie::getname(void)
{
	return(this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}