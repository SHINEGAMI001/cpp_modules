/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 21:20:07 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 16:35:18 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string Name): _Name(Name), _Weapon(NULL){}

HumanB::~HumanB(){
	std::cout << "HumanB Diconstractor" << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}
std::string	HumanB::get_name()
{
	return _Name;
}

void HumanB::attack(void)
{

	if (_Weapon != NULL)
		std::cout << get_name() << " attacks with their " <<  this->_Weapon->get_type() << std::endl;
	else
		std::cout << get_name() << " Got No Weapon :{" << std::endl;
}