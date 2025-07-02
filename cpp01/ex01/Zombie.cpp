/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:47:41 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 23:07:14 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Contsractor Init" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie :" << this->name << " Diconstractor" << std::endl;
}

void Zombie::set_name(std::string _name)
{
	this->name = _name;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}