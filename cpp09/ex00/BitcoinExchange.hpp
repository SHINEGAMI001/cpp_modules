/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:04:11 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/06 22:33:19 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

class BitcoinExchange{
	private:
		std::map<std::string, float> _data;
		void read_file();
	
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
	~BitcoinExchange();

	std::map<std::string, float> get_data();
	void print_data();
	void execute(char * file_name);
	int valid_date(std::string date);
	int valid_price( float f_price);
	void multiply_price(std::string date, float f_price);
	
	class CantOpenFile: public std::exception{
		const char * what() const throw();
	};

	class InvalidHeaderLine: public std::exception{
		const char * what() const throw();
	};

	class InvalidPriceFormat: public std::exception{
		const char * what() const throw();
	};

};