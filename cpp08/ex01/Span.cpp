/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 00:27:58 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/02 01:45:40 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_size(0), _index(0){
	std::cout << "Default Constructer Called\n";
}
		
Span::Span(unsigned int size):_size(size), _index(0){
	std::cout << "Paramterized Constructer Called\n";
}

Span::Span(const Span &other):_size(other._size){
	_index = other._index;
	_varray = other._varray;
	std::cout << "Copy Constructer Called\n";
}

Span::~Span(){
	std::cout << "Default Destructer Called\n";
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
		return *this;
	_size = other._size;
	_varray = other._varray;
	return *this;
}

const char * Span::BreakingSizeLimit::what() const throw(){
	return "exception: varray is already full";
}

const char * Span::NoPairNumbers::what() const throw(){
	return "exception: need at least two numbers";
}

int Span::get_index(){
	return _index;
}

unsigned int Span::get_size(){
	return _size;
}

void Span::print_varray()
{
	unsigned int i;

	for (i = 0; i < _varray.size() - 1; i++)
		std::cout << _varray[i] << ", ";
	std::cout << _varray[i] << "." << std::endl;
}

void Span::addNumber(int to_add){
	if (_index == _size)
		throw BreakingSizeLimit();
	_varray.push_back(to_add);
	_index++;
}

void Span::addMulti(int range)
{
	srand(time(0));
	for (int i = 0; i < range; i++)
		addNumber(rand());
}

int Span::shortestSpan()
{
	std::vector<int> tmp(_varray);
	if (tmp.size() < 2)
		throw NoPairNumbers();

	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it_tmp = tmp.begin();
	std::vector<int>::iterator it_tmp_next = tmp.begin() + 1;

	int ret = *it_tmp_next - *it_tmp;
	
	// std::cout << "\nvalues:\t";
	// unsigned int i;
	// for (i = 0; i < tmp.size() - 1; i++)
	// 	std::cout << tmp[i] << " ";
	// std::cout << tmp[i] << std::endl;
	
	while (it_tmp_next != tmp.end())
	{
		if ((*it_tmp_next - *it_tmp) < ret)
			ret = *it_tmp_next - *it_tmp;
		it_tmp++;
		it_tmp_next++;
	}
	return ret;
}

int Span::longestSpan()
{
	std::vector<int> tmp(_varray);
	if (tmp.size() < 2)
		throw NoPairNumbers();
	
	std::sort(tmp.begin(), tmp.end());
	int max = *(tmp.end() - 1);
	int min = *tmp.begin();

	return max - min;
}