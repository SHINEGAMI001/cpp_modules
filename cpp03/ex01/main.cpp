/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 02:29:07 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 02:31:51 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap batman("batman");
	ScavTrap superman("superman");

	superman.guardgate();
	batman.attack("superman");
	superman.takeDamage(20);
	superman.attack("batman");
	batman.takeDamage(20);
	return (0);
}