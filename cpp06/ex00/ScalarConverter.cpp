/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:45:14 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/25 19:52:39 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){std::cout << "Default Constructer Called\n";};

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	*this = other;
	std::cout << "Copy Constructer Called\n";
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Default Deconstructer Called\n";
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this == &other)
		return *this;
	return *this;
}

const char * ScalarConverter::CantConvertException::what() const throw(){
	return	"error : cant convert the given argument";
}

bool check_pseudo(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf"
	|| str == "nan" || str == "NAN" || str == "-inf" || str == "+inf")
	{
		double d = std::strtod(str.c_str(), NULL);
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "float  : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(d) << std::endl;
		return 1;
	}
	return 0;
}

void ScalarConverter::convert(std::string str)
{
	std::cout << "str addresse : " << &str << std::endl;
	
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "char   : " << "'" << static_cast<char>(str[0]) << "'" << std::endl;
		std::cout << "int    : " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float  : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return ;
	}

	//pseudo strings check
	if (check_pseudo(str))
		return;

	//check floating numbers
	if (isdigit(str[0]) && str.back() == 'f')
		str.pop_back();
	
	//check if there is more characters
	char *endptr = NULL;
	double value;
	value = std::strtod(str.c_str(), &endptr);
	
	if (*endptr != '\0')
		throw CantConvertException();
		
		
		
	//check char
	if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
		std::cout << "char  : impossible" << std::endl;
	else if (!std::isprint(value))
		std::cout << "char  : not printable" << std::endl;
	else
		std::cout << "str  : " << "'" << static_cast<char>(value) << "'" << std::endl;

			
			
	// check int;
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "int   : impossible\n";
	else
		std::cout << "int   : " << static_cast<int>(value) << std::endl;

		

	//check_float
	std::cout << "float   : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";
		
	//check_double
	std::cout << "double  : " << static_cast<double>(value) << std::endl;
		
}