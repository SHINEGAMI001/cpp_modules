/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:33:33 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/17 18:55:02 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		const std::string _name;
		const std::string _target;
		bool _issigned;
		const int _gradetosign;
		const int _gradetoexec;
	public:

	// AForm();
	AForm(const AForm &other);
	AForm(const std::string name, const std::string target, const int gradetosign, const int gradetoexec);
	virtual ~AForm();

	AForm & operator=(const AForm &other);

	//nested class
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};

	class FormNotSigned : public std::exception{
		const char * what() const throw();
	};

	virtual void execute(const Bureaucrat &other)const = 0;
	void checkExecute(const Bureaucrat &other)const;
	
	void beSigned(const Bureaucrat &bureaucrat);
	std::string getName()const;
	bool getIssigned()const;
	int getGradetosign()const;
	int getGradetoexec()const;
	std::string getTarget()const;
	
	private:
		AForm();
		
};

std::ostream & operator<<(std::ostream &os, const AForm &other);