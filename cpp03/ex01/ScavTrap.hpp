/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 02:39:22 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 02:39:23 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string Name );
		ScavTrap( const ScavTrap & src );
		~ScavTrap();
		ScavTrap & operator = ( const ScavTrap &rhs );
		void	attack( std::string const & target );
		void	guardgate();
};


#endif