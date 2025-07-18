/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:33:26 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 00:16:42 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try{
		
		Bureaucrat first("first", 26);
		ShrubberyCreationForm hmm("target");
		RobotomyRequestForm rform("rform_target");
		PresidentialPardonForm ppform("ppform_target");
		
		std::cout << std::endl;
		std::cout << first << std::endl;
		std::cout << hmm << std::endl;
		std::cout << rform << std::endl;
		std::cout << ppform << std::endl;
		
		std::cout << std::endl;
		//ShrubberyCreationForm
			first.signForm(hmm);
			first.executeForm(hmm);

		std::cout << std::endl;
		//RobotomyRequestForm
			first.signForm(rform);
			first.executeForm(rform);

		std::cout << std::endl;
		//PresidentialPardonForm
			first.signForm(ppform);
			first.executeForm(ppform);

		std::cout << std::endl;
	}catch(std::exception &e)
	{
		std::cout << "exception has : " << e.what() << std::endl;
	}
	// return 0;
}