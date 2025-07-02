/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 23:25:47 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 00:41:27 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructer called" << std::endl;
	this->fixed_point = 0;
};

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructer called" << std::endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	
};

Fixed::~Fixed(){std::cout << "Destructer called" << std::endl;};

Fixed & Fixed::operator=(const Fixed &other){
	std::cout << "Copy operator assingement called" << std::endl;
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return *this; 
};

int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;	
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}