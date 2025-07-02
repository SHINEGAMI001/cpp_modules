/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:49:43 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/27 18:35:47 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie{
		private:
			std::string name;

		public:
		Zombie();
		~Zombie();
		
			void		setname(std::string name);
			std::string getname(void);
			void	announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif