/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 20:55:12 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/26 12:51:30 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for(int z = 0; str[z]; z++)
				std::cout << (char)toupper(str[z]);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return (0);
}