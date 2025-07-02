/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 05:37:01 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 05:37:27 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) { *this = src; }

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType() const { return (this->_type); }

void		WrongAnimal::makeSound() const
{
	std::cout << "looks like a Wrong Animal sounds!" << std::endl;
}