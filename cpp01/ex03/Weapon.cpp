/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:19:25 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 16:38:16 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type): _type(Type){}

Weapon::~Weapon(){
	std::cout << "Weapon Diconstractor" << std::endl;
}

std::string	Weapon::get_type(void)
{
	return(_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
