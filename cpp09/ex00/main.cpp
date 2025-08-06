/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:05:28 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/06 23:07:29 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
// #include <bits/stdc++.h>

int main(int ac, char **av){
	
	if (ac != 2)
		return (std::cerr << "error: invalid arguments\n", 1);
	try{
		BitcoinExchange btc;
		btc.execute(av[1]);

	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	return 0;
	
}