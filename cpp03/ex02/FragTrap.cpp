/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 02:35:44 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/01 02:35:56 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_Name = "Nobody";
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap( std::string Name ) : ClapTrap( Name )
{
	this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) { *this = src; }

FragTrap::~FragTrap()
{
	if (this->_HitPoints == 0)
		std::cout << "FragTrap: < " << this->_Name << " > is Dead!" << std::endl;
	else
		std::cout << "FragTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

FragTrap & FragTrap::operator = ( const FragTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap: < " << this->_Name << ">  requested for a Hight Fives" << std::endl;
}