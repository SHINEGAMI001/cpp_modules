/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:11:37 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/28 22:55:28 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
# include <iostream>

class HumanA{
	private:
		std::string _Name;
		Weapon &_Weapon;

	public:
	HumanA(std::string Name, Weapon &Weapon);
	~HumanA();

	void attack();
	std::string get_name();
	void setType(std::string type);
	
	
};