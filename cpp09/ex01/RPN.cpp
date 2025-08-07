/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 03:28:26 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/07 04:52:03 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){
	// std::cout << "Default Constructer Called" << std::endl;
}

RPN::RPN(const RPN &other){

if (this != &other)
	*this = other;
	std::cout << "Copy Constructer Called\n";
}

RPN::~RPN(){
	// std::cout << "Destructer Called\n";
}

void RPN::evaluate(std::string input)
{
	std::istringstream	s_input(input);
	std::string			snum;

	while (s_input >> snum)
	{
		if (snum.size() == 1 && std::isdigit(snum[0]))
		{
			_number.push(snum[0] - '0');
		}
		else if (snum[0] == '-' || snum[0] == '+'
			|| snum[0] == '/' || snum[0] == '*')
		{
			if (_number.size() < 2)
				throw std::runtime_error("Error");
			int a = _number.top();
			_number.pop();
			int b = _number.top();
			_number.pop();
			int res = 0;
			res = do_the_math(snum[0], a, b);
			_number.push(res);
		}
		else
			throw std::runtime_error("Error");
		
	}
	if (_number.size() != 1)//only res should be there
		throw std::runtime_error("Error");
	else
		std::cout << _number.top() << std::endl;
}

int do_the_math(char op, int a, int b){
	
	if (op == '+')
		return a + b;
	else if (op == '-')
		return b - a;
	else if (op == '*')
		return a * b;
	else// '/'
	{
		if (a == 0 || b == 0)
			throw std::runtime_error("Error");
		else
			return b / a;
	}
}