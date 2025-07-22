/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:42:44 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/22 01:26:51 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	ScalarConverter s;
	if (ac != 2){
		std::cout << "need one parameter\n";
		return 1;
	}
	
	try{

		s.convert(av[1]);
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		
	}
	return 0;

}