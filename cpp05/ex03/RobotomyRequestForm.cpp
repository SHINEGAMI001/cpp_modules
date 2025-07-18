/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:40:07 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 19:23:59 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("default", "none", 72, 45)
{
	std::cout << "Default RobotomyRequestForm Constructer Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "Parameterized RobotomyRequestForm Constructer Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other){
	std::cout << "Copy RobotomyRequestForm Constructer Called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm Deconstructer Called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &other)const{

	
	(void)other;
	std::srand(std::time(NULL));
	
	std::cout << "Makes Some Drilling Noises..." << std::endl;
	if (std::rand() % 2 == 0)
	{
		std::cout << getTarget() << " has been robotomized successfully 50 percent of the time" << std::endl;
	}
	else
		std::cout << "the robotomy failed" << std::endl;
	
	
}