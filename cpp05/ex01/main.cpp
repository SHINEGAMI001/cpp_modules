/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:16:51 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 02:43:34 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try{

		Bureaucrat *br1 = new Bureaucrat("br1", 20);
		Bureaucrat *br2 = new Bureaucrat("br2", 60);
		Form *fr = new Form("form", 70, 50);

		std::cout << std::endl;
		std::cout << *br1 << std::endl;
		std::cout << *br2 << std::endl;
		std::cout << *fr << std::endl;
			
		std::cout << std::endl;
		br1->signForm(*fr);
		std::cout << std::endl;
		br2->signForm(*fr);
		std::cout << std::endl;

		
		delete br1;
		delete br2;
		delete fr;

	}catch(std::exception &e)
	{
		std::cout << "exception has : "<< e.what() << std::endl;
	}
	
	return 0;
}