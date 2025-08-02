/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:16:46 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/02 01:50:04 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	//scoop one
	{
		std::cout << "\t+++++++++-TRY ADD NUMBER-+++++++++" << std::endl;
		Span span_obj(5);

		try{
			span_obj.addNumber(6);
			span_obj.addNumber(3);
			span_obj.addNumber(17);
			span_obj.addNumber(9);
			span_obj.addNumber(11);

			std::cout << span_obj.shortestSpan() << std::endl;
			std::cout << span_obj.longestSpan() << std::endl;
		}catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}		
	}

	std::cout << std::endl;

	//scoop two
	{
		std::cout << "\t+++++++++-TRY MULTI NUMBER-+++++++++" << std::endl;
		Span span_obj(20000);

		try{
			span_obj.addMulti(20000);
			std::cout << span_obj.shortestSpan() << std::endl;
			std::cout << span_obj.longestSpan() << std::endl;
		}catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
		
	}

	return 0;
}