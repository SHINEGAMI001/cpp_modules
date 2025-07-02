/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 05:53:28 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 05:53:40 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog( const Dog &src );
		~Dog();
		Dog & operator = ( const Dog &rhs );
		void makeSound() const;
};
