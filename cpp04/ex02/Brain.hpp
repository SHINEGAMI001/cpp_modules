/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 06:01:18 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 06:01:33 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string	_ideas[100];
	public:
		Brain();
		Brain( const Brain & src );
		~Brain();
		Brain & operator = ( const Brain &rhs );
};
