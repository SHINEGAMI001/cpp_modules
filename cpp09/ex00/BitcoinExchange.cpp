/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:06:14 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/06 23:10:23 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

BitcoinExchange::BitcoinExchange(){
	read_file();
	std::cout << "Default Constructer Called\n";
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	this->_data = other._data;
	std::cout << "Copy Constructer Called\n";
}

BitcoinExchange::~BitcoinExchange(){
	std::cout << "Default Destructer Called\n";
}

const char* BitcoinExchange::CantOpenFile::what() const throw(){
	return "exception: cant open file";
}

const char *BitcoinExchange::InvalidHeaderLine::what() const throw(){
	return "exception: wrong header line";
}

const char * BitcoinExchange::InvalidPriceFormat::what() const throw(){
	return "exception: invalid price format";
}

void BitcoinExchange::print_data()
{
	std::map<std::string, float>::iterator it = _data.begin();

	std::cout << "date  |  value" << std::endl;
	while (it != _data.end())
	{
		std::cout << it->first << " | " << it->second << std::endl;
		it++;
	}
}

void BitcoinExchange::read_file(){
	std::fstream file("data.csv");
	if (!file.is_open())
		throw CantOpenFile();
	
	std::string line;
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw InvalidHeaderLine();
	
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		
		std::string key;
		std::string value;
		float price_value;

		std::istringstream ss(line);
		std::getline(ss, key, ',');
		std::getline(ss, value);

		std::istringstream price(value);
		if (!(price >> price_value))
			throw InvalidPriceFormat();
		_data[key] = price_value;

	}

	file.close();
	// std::cout << "data base ready to use\n";

	// print_data();
	
	
}

void BitcoinExchange::execute(char * file_name){
	if (!file_name)
	{
		std::cerr << "invalid file\n" << std::endl;
		return;
	}


	std::fstream file(file_name);
	if (!file.is_open())
		throw CantOpenFile();

	std::string line;
	std::string date;
	std::string price;

	std::getline(file, line);
	if (line != "date | value")
		throw InvalidHeaderLine();
	
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		std::istringstream sstr(line);
		std::getline(sstr, date, '|');
		std::getline(sstr, price);
		
		
		if (!(date.empty()) && date.back() == ' ')
				date.pop_back();
		if (!(price.empty()))
			price = price.erase(0, 1);

		if (!valid_date(date))
		{
			std::cerr << "error: bad input => " << date << std::endl;
			continue;
		}
		float f_price;
		std::istringstream s_price(price);
		if (!(s_price >> f_price))
		{
			std::cout << "error: invalid price format\n";
			continue;
		}
		
		if (!valid_price(f_price))
			continue;
		std::cout << date << " => " << f_price << " = ";


		multiply_price(date, f_price);
	}

	file.close();
}

int BitcoinExchange::valid_date(std::string date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return 0;
	}

	//check month block
	if ((date[5] == '0' && date[6] == '0') || date[6] == '0')
		return 0;
	if (date[5] >= '1' && date[6] > '2')
		return 0;
	
	//check day block
	if ((date[8] == '0' && date[9] == '0') || date[9] == '0')
		return 0;
	if (date[8] >= '3' && date[9] > '1')
		return 0;
	return 1;

}

int BitcoinExchange::valid_price(float f_price){
	if (f_price < 0)
	{
		std::cout << "error: not a positive number\n";
		return 0;
	}
	if (f_price > 1000)
	{
		std::cout << "error: number too large\n";
		return 0;
	}
	return 1;
		
}

void BitcoinExchange::multiply_price(std::string date, float f_price){
	//if date in db multiply price with current date
	//if date not found multiply with the lower closest one in db
	
	std::map<std::string, float>::iterator it = _data.find(date);
	if (it != _data.end())
	{
		std::cout << f_price * it->second << std::endl;
	}
	else
	{
		std::map<std::string, float>::iterator it2 = _data.lower_bound(date);
		if (it2 == _data.begin())
			std::cout << f_price * it2->second << std::endl;
		else{
			it2--;
			std::cout << f_price * it2->second << std::endl;
		}
	}
	
}

std::map<std::string, float> BitcoinExchange::get_data()
{
	return _data;
}