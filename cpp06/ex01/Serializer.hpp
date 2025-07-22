/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:32:46 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/22 20:46:19 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
# include <iostream>

typedef struct Data{
	std::string person_name;
	int			age;

}Data;

class Serializer{
	private:
		Serializer();
		Serializer(const Serializer &other);
		
	public:
		~Serializer();
	
		uintptr_t serializer(Data *ptr);
		Data* deserializer(uintptr_t raw);
	
};