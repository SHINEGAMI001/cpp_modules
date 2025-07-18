/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:02:43 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 19:48:07 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	
	AForm *a_form;
	Intern i_obj;

	try{
	Bureaucrat br("br", 46);

	a_form = i_obj.makeForm("Shrubbery Creation", "Bender");
	std::cout << std::endl;

	if (a_form)
	{
		try{

			br.signForm(*a_form);
			a_form->checkExecute(br);
		}catch(std::exception &e)
		{
			std::cout << "Exception has : " << e.what() << std::endl;
		}
		std::cout << std::endl;
		delete a_form;
	}
	}catch(std::exception &e){
		std::cout << "Exception has: " << e.what() << std::endl;}
	// std::cout << std::endl;

	return 0;

	
}