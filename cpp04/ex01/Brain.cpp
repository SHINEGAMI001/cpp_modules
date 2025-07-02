/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 05:50:50 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 05:50:56 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=( const Brain &rhs )
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}