/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 00:00:43 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 00:42:28 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fixed_point;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &other);
		//
		float toFloat(void)const;
		int toInt(void)const;
		int getRawBits(void)const;
		void setRawBits(const int raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed);