/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:39:46 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 18:41:12 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("defualt", "none", 25, 5){
	std::cout << "Default Constructer Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", target, 25, 5)
{
	std::cout << "Parameterized PresidentialPardonForm Constructer Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other){
	std::cout << "Copy PresidentialPardonForm Constructer Called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm Deconstucter Called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &other)const
{
	(void)other;
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}