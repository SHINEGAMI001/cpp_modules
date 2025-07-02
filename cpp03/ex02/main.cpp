/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 02:37:38 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 02:42:49 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap batman("batman");
	ScavTrap superman("superman");
	FragTrap joker("joker");

	superman.guardgate();
	joker.highFivesGuys();
	batman.attack("joker");
	joker.takeDamage(20);
	joker.attack("batman");
	batman.takeDamage(20);
	return (0);
}