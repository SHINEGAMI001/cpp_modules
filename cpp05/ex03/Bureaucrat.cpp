/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:39:20 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 18:39:21 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

//default Constructer
Bureaucrat::Bureaucrat():_name("Default"), _grade(low){
	std::cout << "Default constructer" << std::endl;
}

//object constructer
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	_grade = other._grade;
}


// copy Constructer
Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
	if (grade > low)
		throw Bureaucrat::GradeTooLowException();
	if (grade < high)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;

}

Bureaucrat::~Bureaucrat(){std::cout << "Bureaucrat Deconstructer Called" << std::endl;}


//operator = overload
Bureaucrat& Bureaucrat::operator = (const Bureaucrat &other)
{
	if (other._grade > low)
		throw Bureaucrat::GradeTooLowException();
	if (other._grade < high)
		throw Bureaucrat::GradeTooHighException();
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

//nested class
const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade Too High !!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade Too Low !!";
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
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement(){
	_grade++;
	if (_grade > low)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
	try{
		form.beSigned(*this);
	}catch(std::exception &e)
	{
		std::cout << "Exception has : " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm &form)
{
	try{
		form.checkExecute(*this);
	}catch(std::exception &e)
	{
		std::cout << "exception has : " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream & os, const Bureaucrat &other)
{
	os << "Name : " << other.GetName() << ", Grade is : " << other.GetGrade();
	return os;
}