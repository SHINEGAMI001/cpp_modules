/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 18:36:44 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/18 18:54:19 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();

	private:
		typedef struct s_forms{
			std::string name;
			AForm *forms;
		}t_forms;
	
	public:
		AForm *makeForm(std::string name, std::string target);

};