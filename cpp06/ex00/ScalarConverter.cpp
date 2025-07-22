/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:45:14 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/22 01:38:42 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){std::cout << "Default Constructer Called\n";};

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	*this = other;
	std::cout << "Copy Destructer Called\n";
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Decostructer Called\n";
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

const char * ScalarConverter::CantConvertException::what() const throw(){
	return	"error : cant convert the given argument";
}

void ScalarConverter::convert(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "char   : " << "'" << static_cast<char>(str[0]) << "'" << std::endl;
		std::cout << "int    : " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float  : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return ;
	}

		// check number
		double value;
		if (isdigit(str[0])) {
			char *endptr = NULL;
			value = std::strtod(str.c_str(), &endptr);
			std::cout << "hell " << endptr << std::endl;
			if (endptr && *endptr != '\0') {
				throw CantConvertException();
			}
		}
		// else if (isdigit(str[0]) && str.length() - 1 == 'f'){
			
		// }
		else {
			throw CantConvertException();
		}
		

		int is_nan = 0;
		int is_inf = 0;
		
		is_nan = std::isnan(value);
		is_inf = std::isinf(value);

		//check char
		if (is_nan || is_inf || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
			std::cout << "char  : impossible" << std::endl;
		else if (!std::isprint(value))
			std::cout << "char  : not printable" << std::endl;
		else
			std::cout << "str  : " << "'" << static_cast<char>(value) << "'" << std::endl;

			
			
		// check_int(value, is_nan, is_inf);
	
		if (is_nan || is_inf || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
			std::cout << "int   : impossible\n";
		else
			std::cout << "int   : " << static_cast<int>(value) << std::endl;

		

		//check_float
		std::cout << "float   : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";
		
		//check_double
		std::cout << "double  : " << static_cast<double>(value) << std::endl;
		
}