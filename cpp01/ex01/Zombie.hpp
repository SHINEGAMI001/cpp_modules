/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:43:44 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/28 18:12:28 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void set_name(std::string _name);
		void announce();
};

Zombie* ZombieHorde( int N, std::string _name);

#endif