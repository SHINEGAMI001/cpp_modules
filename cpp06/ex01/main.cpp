/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:39:42 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/23 19:38:42 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serializer *a = NULL;
	Data d;
	
	d.age = -10;
	d.person_name = "name";
	

	std::cout << "original adress of struct Data : " << &d << std::endl;

	std::cout << "serializing to uintptr_t type...\n";

	uintptr_t a_ptr = a->serializer(&d);
	std::cout << "<uintptr_t> value  : " << a_ptr << std::endl;
	std::cout << "<uintptr_t> adress : " << &a_ptr << std::endl;



	std::cout << std::endl;
	std::cout << "deserializing...\n";
	Data *d2 = a->deserializer(a_ptr);
	std::cout << "adress of struct Data after deserializing : " << d2 << std::endl;
	

	return 0;

	
}