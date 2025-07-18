/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:36:22 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 19:47:32 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Default Intern Constructer Called" << std::endl;
}

Intern::Intern(const Intern &other){
	*this = other;
	std::cout << "Copy Intern Constructer Called" << std::endl;
}

Intern::~Intern(){std::cout << "Default Intern Deconstructer Called" << std::endl;}

AForm * Intern::makeForm(std::string name, std::string target)
{
	// (void)target;
	AForm *ret = NULL;
	int N_forms = 3;

	t_forms forms[] = {
		{"Shrubbery Creation", new ShrubberyCreationForm(target)},
		{"Robot Request", new RobotomyRequestForm(target)},
		{"Presidential Pardon", new PresidentialPardonForm(target)}
	};

	for (int i = 0; i < N_forms; i++)
	{
		if (forms[i].name == name)
			ret = forms[i].forms;
		else
			delete forms[i].forms;
	}

	if (ret != NULL)
	{
		std::cout << "Intern Creates" << name << std::endl;
		return ret;
	}
	else
	{
		std::cout << std::endl;
		std::cout << name << " Not Found" << std::endl;	
		return NULL;
	}
}

