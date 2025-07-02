/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:22:04 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/28 22:57:33 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "Weapon.hpp"
# include <iostream>

class HumanB{
	private:
		std::string _Name;
		Weapon *_Weapon;

	public:
	HumanB(std::string Name);
	~HumanB();

	std::string get_name();
	void attack();
	void setWeapon(Weapon &Weapon);
	
};