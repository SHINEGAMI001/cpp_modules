/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:22:43 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/17 21:36:30 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Default", "none", 145, 137)
{
	std::cout << "Default Constructer Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyForm", target, 145, 137)
{
	std::cout << "Parameterized Shrubbery Creation Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other){
	// other = *this;
	std::cout << "Copy Shrubbery Creation Constructer Called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Shrubbery Creation Deconstructer Called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &other)const{

		(void)other;
		std::ofstream out;

		out.open((getTarget()+"_shrubbery").c_str(), std::ofstream::out | std::ofstream::trunc);
		out << "       &&& &&  & &&\n";
		out << "      && &\\/&\\|& ()|/ @, &&\n";
		out << "      &\\/(/&/&||/& /_/)_&/_&\n";
		out << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
		out << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
		out << "&&   && & &| &| /& & % ()& /&&\n";
		out << " ()&_---()&\\&\\|&&-&&--%---()~\n";
		out << "     &&     \\||| \n";
		out << "             |||\n";
		out << "             |||\n";
		out << "             |||\n";
		out << "             |||\n";
		out << "       , -=-~  .-^- _\n";

		out.close();
		std::cout << other.GetName() << " executed " << getName() << std::endl;
		// std::cout << "Ascii Tree Created Successfuly" << std::endl;

}
