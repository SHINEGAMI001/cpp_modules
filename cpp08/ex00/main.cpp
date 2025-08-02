/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:32:29 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/01 21:16:09 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v(2, 69);
	
	v.push_back(70);
	v.push_back(100);
	v.push_back(110);
	v.insert(v.begin(), 3);
	v.insert(v.begin() + 1, 11);
	std::cout << "-vector size:\t" << v.size() << "-" << std::endl;

	std::vector<int>::iterator it;
	
	try{
		it = easyfind(v, 2);
		std::cout << "object found :\t" << *it << std::endl;
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}