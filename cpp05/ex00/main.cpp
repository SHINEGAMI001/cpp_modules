/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:15:53 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 01:57:06 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat br("br", 10);

		std::cout << br << std::endl;
		
		br.increment();
		br.increment();
		
		std::cout << std::endl;
		std::cout << br << std::endl;
		std::cout << std::endl;

	}catch(std::exception &e){
		std::cout << "Exception has : " << e.what() << std::endl;
	}

}