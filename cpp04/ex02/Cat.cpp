/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 05:59:35 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 05:59:49 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( const Cat &src ) { *this = src; }

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=( const Cat &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_brain = new Brain();
	this->_brain = rhs._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "looks like a Cat sound!" << std::endl;
}