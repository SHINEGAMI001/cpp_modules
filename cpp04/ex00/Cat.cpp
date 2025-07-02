/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 05:36:41 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 05:37:48 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() { this->_type = "Cat"; }

Cat::Cat( const Cat &src ) { *this = src; }

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat & Cat::operator=( const Cat &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "looks like a Cat sound!" << std::endl;
}