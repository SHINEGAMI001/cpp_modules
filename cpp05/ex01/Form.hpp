/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:47:43 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 01:16:58 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form{
	private:
		const std::string _name;
		bool _issigned;
		const int _gradetosign;
		const int _gradetoexec;
	public:

	Form(const Form &other);
	Form(const std::string &name, const int gradetosign, const int gradetoexec);
	~Form();

	Form & operator=(const Form &other);

	//nested class
	class GradeTooLowException : public std::exception{
		const char *what() const throw();
	};

	class GradeTooHighException : public std::exception{
		const char *what() const throw();
	};

	void beSigned(const Bureaucrat &bureaucrat);
	std::string getName()const;
	bool getIssigned()const;
	int getGradetosign()const;
	int getGradetoexec()const;
	
	private:
		Form();
	
		
};

std::ostream & operator<<(std::ostream &os, const Form &other);