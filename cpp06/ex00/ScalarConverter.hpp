/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:42:49 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/21 19:40:36 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <cmath>
# include <string>
# include <cstdlib>
# include <sstream>
# include <iomanip>

class ScalarConverter{
	private:
	
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &other);

		class CantConvertException : public std::exception{
			const char * what() const throw();
		};
		
		static void convert(std::string str);
	
};
