/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:01:40 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 06:02:15 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat( const Cat &src );
		~Cat();
		Cat & operator=( const Cat &rhs );
		void	makeSound() const;
};