/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:00:56 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 06:02:15 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal( const Animal & src );
		virtual ~Animal();
		Animal & operator = ( const Animal & rhs );
		std::string	getType() const;
		virtual void		makeSound() const = 0;
};
