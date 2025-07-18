/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:25:41 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/16 23:34:54 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#define low 150
#define high 1

class AForm;

class Bureaucrat{
	private:
		std::string const _name;
		int _grade;
	public:
	
	//constructer && deconstructer
	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat(std::string const name, int grade);
	~Bureaucrat();
	Bureaucrat & operator =(const Bureaucrat &other);

	//nested class
	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};


	//getter
		std::string GetName()const;
		int GetGrade()const;
	// increment decrement
		void increment();
		void decrement();
		
	void signForm(AForm &form);
	void executeForm(const AForm & form);
		
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);