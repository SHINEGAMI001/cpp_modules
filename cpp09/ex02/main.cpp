	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 06:42:40 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/08 01:26:19 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int check_args(char **av)
{
	
		for (int i = 1; av[i]; i++)
		{
			int number = 0;
			for (int j = 0; av[i][j]; j++)
			{
				if (av[i][j] == '-')
					continue;
				if (!isdigit(av[i][j]))
				{
					std::cerr << "error: only integers expected\n";
					return 1;
				}
			}
			number = std::atoi(av[i]);
			if (number < 0 || number > INT_MAX)
			{
				std::cerr << "error: only positive integeres expected\n";
				return 1;
			}
			
		}
		return 0;
}

int main(int ac, char **av)
{
	if (ac < 3){
		std::cerr << "error: invalid argumenet size\n";
		return (1);
	}

	if (check_args(av) == 1)
		return 1;
	else{
		PmergeMe p_obj;
		p_obj.stack_containers(av);
		p_obj.execute();
	}
	return 0;
}