/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 00:10:18 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 01:48:39 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructer assignement

Fixed::Fixed(){
	std::cout << "Default constructer called" << std::endl;
	fixed_point = 0;
};

Fixed::Fixed(const int number){
	std::cout << "Int constructer called" << std::endl;
	fixed_point = number << this->fract_bits;
};

Fixed::Fixed(const float number){
	std::cout << "Float constructer called" << std::endl;
	fixed_point = roundf(number * (1 << this->fract_bits));
};

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy destructer called" << std::endl;
	fixed_point = src.getRawBits();
};


//Deconstructer

Fixed::~Fixed(){
	std::cout << "Deconstructer called" << std::endl;
};

// overload assinement operator

Fixed & Fixed::operator=(const Fixed &src){
	std::cout << "Copy assingment operator called" << std::endl;
	if (this != &src)
		fixed_point = src.getRawBits();
	return *this;
};

//toInt and toFloat

float Fixed::toFloat(void)const{
	return ((float)this->fixed_point / (1 << this->fract_bits));
}

int Fixed::toInt(void)const{
	return ((int)this->fixed_point >> this->fract_bits);
}

//setter and getter

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

//print operator oveloard

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

