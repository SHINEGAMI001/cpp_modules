/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 01:02:57 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/07 04:19:50 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){

	if (ac > 2){
		std::cerr << "error: invalid argument number\n";
		return 1;
	}
	
	RPN rpn_op;

	try{
		rpn_op.evaluate(av[1]);
		
	}catch(std::exception &e){

		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;

	
}