/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 02:17:09 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 02:24:52 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap venom("venom");
	ClapTrap hiwi("hiwi");

	hiwi.beRepaired(10);
	venom.attack("hiwi");
	hiwi.takeDamage(0);
	venom.beRepaired(10);
	hiwi.attack("venom");
	venom.takeDamage(0);
	return (0);
}

