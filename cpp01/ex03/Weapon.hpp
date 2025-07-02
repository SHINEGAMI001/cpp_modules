/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:07:39 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/28 22:54:36 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Weapon;

class Weapon{
	private:
		std::string _type;
		
	public:
	Weapon(std::string Type);
	~Weapon();
		std::string get_type();
		void setType(std::string type);
		
};