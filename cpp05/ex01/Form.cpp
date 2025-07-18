/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:01:18 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 01:35:15 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("default"), _issigned(false), _gradetosign(50), _gradetoexec(40){
	std::cout << "Default Constructer Called" << std::endl;
}


Form::Form(const std::string &name, const int gradetosign, const int gradetoexec):_name(name), _issigned(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if (_gradetosign > low || _gradetoexec > low)
		throw Bureaucrat::GradeTooLowException();
	if (_gradetosign< high || _gradetoexec < high)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Parametrized Form Constructer Called" << std::endl;
	
}

Form::Form(const Form &other):_name(other._name), _issigned(other._issigned), _gradetosign(other._gradetosign), _gradetoexec(other._gradetoexec){
	std::cout << "copy Form constructed" << std::endl;
}

Form::~Form(){std::cout << "Form Deconstructer Called" << std::endl;};

Form & Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	return *this;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.GetGrade() > _gradetosign)
	{
		std::cout << bureaucrat.GetName() << " Cannot Sign Form Because ";
		throw Form::GradeTooLowException();
	}
	else
	{
		_issigned = true;
		std::cout << bureaucrat.GetName() << " signed " << getName()  << " succsessfuly" << std::endl;
	}

	
}

//nested class defenition

const char * Form::GradeTooLowException::what()const throw(){
	return "Grade Too Low !";
}

const char * Form::GradeTooHighException::what()const throw(){
	return "Grade Too High !";
}

std::string Form::getName()const
{
	return _name;
}

bool Form::getIssigned()const
{
	return _issigned;
}

int Form::getGradetosign()const
{
	return _gradetosign;
}

int Form::getGradetoexec()const
{
	return _gradetoexec;
}

std::ostream &operator<<(std::ostream &os, const Form &other)
{
	os << "name : " << other.getName() << ", status: " << other.getIssigned() 
	<< ", grade to sign : " << other.getGradetosign()
	<< ", grade to exec " << other.getGradetoexec();
	return os;
}