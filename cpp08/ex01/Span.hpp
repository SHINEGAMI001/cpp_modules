/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:18:44 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/02 01:48:41 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
#include <vector>
// #include <algorithm>

class Span{
	private:
		std::vector<int>	_varray;
		unsigned int		_size;
		unsigned int		_index;
	public:
		Span();
		
		Span(unsigned int size);

		Span(const Span &other);

		~Span();
		
		Span &operator=(const Span &other);

		class BreakingSizeLimit:public std::exception{
			const char * what() const throw();
		};

		class NoPairNumbers:public std::exception{
			const char * what() const throw();	
		};
		//getter
		unsigned int get_size();
		int get_index();

		void print_varray();

		//setter
		void addNumber(int to_add);
		void addMulti(int range);
		int shortestSpan();
		int longestSpan();	
};