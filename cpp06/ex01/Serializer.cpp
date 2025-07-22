/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:31:58 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/22 20:55:25 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default Constructer Called\n";
}

Serializer::Serializer(const Serializer &other)
{
	*this = other;
	std::cout << "Copy Constructer Called\n";
}

Serializer::~Serializer(){
	std::cout << "Default Deconstructer Called" << std::endl;
}

uintptr_t Serializer::serializer(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data * Serializer::deserializer(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}