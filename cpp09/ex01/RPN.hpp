/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 01:03:13 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/07 04:08:53 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <stack>

class RPN{
	private:
		std::stack<int> _number;

	public:
		RPN();
		RPN(const RPN &other);
		~RPN();

	void evaluate(std::string input);

		
			
};

int do_the_math(char op, int a, int b);