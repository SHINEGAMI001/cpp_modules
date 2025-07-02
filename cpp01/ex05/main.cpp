/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:11:10 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 23:01:32 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harl;
		harl.complain(av[1]);
	}
	else
		std::cout << "complaining about other useless stuff..." << std::endl;
	return 0;
}