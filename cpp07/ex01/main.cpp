/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 23:02:48 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/29 22:59:47 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void do_somthing(char &charr)
{
	if (charr >= 'a' && charr <= 'z' )
		charr = toupper(charr);
	else 
		charr = tolower(charr);

}

void do_default(char &charr)
{
	if (charr >= 'A' && charr <= 'Z')
		charr = tolower(charr);
	else
		charr = toupper(charr);
}

int main()
{
	char array[] = "ARray of CharacTers";
	
	iter(array, strlen(array), do_somthing);
	
	std::cout << "array after function: " << array << std::endl;
	
	iter(array, strlen(array), do_default);
	std::cout << "default array: " << array << std::endl;
}