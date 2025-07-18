/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:39:08 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 19:42:27 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():_name("default"), _issigned(false), _gradetosign(50), _gradetoexec(40){
	std::cout << "Default Constructer" << std::endl;
}

AForm::AForm(const std::string name, const std::string target, const int gradetosign, const int gradetoexec): _name(name), _target(target), _issigned(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec){
	if (_gradetosign > low || _gradetoexec > low)
		throw Bureaucrat::GradeTooLowException();
	if (_gradetoexec < high || _gradetoexec < high)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "AForm Created" << std::endl;
}

AForm::AForm(const AForm &other): _name(other._name), _target(other._target), _issigned(other._issigned), _gradetosign(other._gradetoexec), _gradetoexec(other._gradetoexec){
	std::cout << "Copy Constructer Called" << std::endl;
}

AForm:: ~AForm(){
	std::cout << "AForm Deconstructer Called" << std::endl;
}

AForm & AForm::operator=(const AForm &other){
	if (this == &other)
		return *this;
	return *this;
}

const char * AForm::GradeTooHighException::what() const throw(){
	return "Grade Too High";
}

const char * AForm::GradeTooLowException::what() const throw(){
	return "Grade Too Low";
}

const char * AForm::FormNotSigned::what() const throw(){
	return "Form Not Signed";
}

void AForm::beSigned(const Bureaucrat &other)
{
	if (other.GetGrade() > _gradetosign)
	{
		std::cout << other.GetName() << " could not sign " << getName() << " because ";
		throw AForm::GradeTooLowException();
	}
	else
	{
		_issigned = true;
		std::cout << other.GetName() << " signed " << getName() <<  std::endl;
	}
		
}

std::string AForm::getName()const
{
	return _name;
}

bool AForm::getIssigned()const
{
	return _issigned;
}

int AForm::getGradetosign()const
{
	return _gradetosign;
}

int AForm::getGradetoexec()const
{
	return _gradetoexec;
}

std::string AForm::getTarget()const{
	return _target;
}

void AForm::checkExecute(const Bureaucrat &other)const
{
	if (_issigned == false)
	{
		std::cout << "Executing Form Failed Because ";	
		throw FormNotSigned();
	}
	if (other.GetGrade() > _gradetoexec)
	{
		std::cout << "Executing Form Failed Because ";
		throw GradeTooLowException();
	}
	else
	{
		execute(other);
	}
}

std::ostream &operator<<(std::ostream &out, const AForm &other)
{
	out << "Name : " << other.getName() << ", Target : " << other.getTarget()
	<< ", Status: " << other.getIssigned() 
	<< ", Grade to sign : " << other.getGradetosign()
	<< ", Grade to exec " << other.getGradetoexec();
	return out;
}