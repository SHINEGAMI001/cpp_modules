/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:53:11 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 01:51:15 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//default Constructer
Bureaucrat::Bureaucrat():_name("Default"), _grade(low){
	std::cout << "Default Constructer Called" << std::endl;
}

//copy constructer
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	_grade = other._grade;
	std::cout << "Copy Bureaucrat Contructer Called" << std::endl;
}



Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
	if (grade > low)
		throw Bureaucrat::GradeTooLowException();
	if (grade < high)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
	std::cout << "Parametrized Bureaucrat Constructer Called" << std::endl;

}

Bureaucrat::~Bureaucrat(){std::cout << "Bureaucrat Deconstructer Called" << std::endl;}


//operator = overload
Bureaucrat& Bureaucrat::operator = (const Bureaucrat &other)
{
	if (other._grade > low)
		throw Bureaucrat::GradeTooLowException();
	else if (other._grade < high)
		throw Bureaucrat::GradeTooHighException();
	if (this != &other)
		*this = other;
	return (*this);
}

//nested class
const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade Too High !";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade Too Low !";
}

//getters
std::string Bureaucrat::GetName()const
{
	return _name;
}

int Bureaucrat::GetGrade()const
{
	return _grade;
}

void Bureaucrat::increment(){
	_grade--;
	if (_grade < high)
		throw GradeTooHighException();
}

void Bureaucrat::decrement(){
	_grade++;
	if (_grade > low)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream & os, const Bureaucrat &other)
{
	os << other.GetName() << ", Bureaucrat Grade Is : " << other.GetGrade();
	return os;
}