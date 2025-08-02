/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:24:17 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/01 22:17:30 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
#include <vector>
// #include <iterator>
// #include <algorithm>

class NoIteratorFound:public std::exception{
	const char * what() const throw(){
		return "error: no object found";
	}
};

template <typename C>
std::vector<int>::iterator easyfind(C vecvec, int to_find)
{
	std::vector<int>::iterator it = find(vecvec.begin(), vecvec.end(), to_find);
	if (it != vecvec.end())
		return it;
	else
		throw NoIteratorFound();
}

	
