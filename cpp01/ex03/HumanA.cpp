/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:26:16 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 16:31:48 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon): _Name(Name), _Weapon(Weapon){}

HumanA::~HumanA(){
	std::cout << "HumanA Diconstractor" << std::endl;
}

std::string HumanA::get_name(void)
{
	return _Name;
}

void HumanA::setType(std::string name)
{
	this->_Weapon.setType(name);
}

void HumanA::attack(void)
{

	std::cout << get_name() << " attacks with their " <<  this->_Weapon.get_type() << std::endl;
}