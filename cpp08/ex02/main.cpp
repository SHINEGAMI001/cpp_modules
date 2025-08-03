/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:54:30 by hlachhab          #+#    #+#             */
/*   Updated: 2025/08/03 01:38:59 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(){

	std::cout << "++++++++-TRY DFLT CONSTRUCTER-++++++++\n";
	MutantStack<int> ms;

	std::cout << "adress location : " << &ms << std::endl;

	ms.push(1);
	ms.push(3);
	ms.push(4);
	ms.push(100);
	ms.push(69);

	MutantStack<int>::iterator begin_it = ms.begin();
	MutantStack<int>::iterator end_it = ms.end();
	
	while (begin_it != end_it){
		std::cout << *begin_it << std::endl;
		begin_it++;
	}
	
	std::cout << "++++++++-TRY COPY CONSTRUCTER-++++++++\n";
	MutantStack<int> copy_ms(ms);
	copy_ms.push(10000);

	begin_it = copy_ms.begin();
	end_it = copy_ms.end();
	
	while (begin_it != end_it)
	{
		std::cout << *begin_it << std::endl;
		begin_it++;
	}
	std::cout << "++++++++++++++++++++++++++++++++++++++++\n";
	
	
	return 0;
}