/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 01:51:57 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 01:53:49 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int _FixedPointValue;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float fnumber );
		Fixed( const Fixed &src );
		~Fixed();
		Fixed & operator = ( const Fixed &src );
		Fixed operator + ( const Fixed &src ) const;
		Fixed operator - ( const Fixed &src ) const;
		Fixed operator * ( const Fixed &src ) const;
		Fixed operator / ( const Fixed &src ) const;


		Fixed & operator ++ ( void ); //pre increment
		Fixed & operator -- ( void ); //pre decrement
		Fixed operator ++ ( int );  //post increment
		Fixed operator -- ( int ); //post decrement

		bool operator > ( const Fixed &src ) const;
		bool operator < ( const Fixed &src ) const;
		bool operator >= ( const Fixed &src ) const;
		bool operator <= ( const Fixed &src ) const;
		bool operator == ( const Fixed &src ) const;
		bool operator != ( const Fixed &src ) const;

		static Fixed &min ( Fixed & first, Fixed &second);
		const static Fixed &min ( const Fixed & first, const Fixed &second);
		static Fixed &max ( Fixed & first, Fixed &second);
		const static Fixed &max ( const Fixed & first, const Fixed &second);

		int getRawBits( void ) const;
		void setRowBits( int const row ) ;
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &a);
