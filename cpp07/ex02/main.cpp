/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:18:38 by hlachhab          #+#    #+#             */
/*   Updated: 2025/07/30 22:34:18 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	{
		std::cout << "\t+try int type+" << std::endl;
		Array<int> arr_obj(10);

		std::cout << "size of int array : " << arr_obj.size() << std::endl;
		try{
			for (int i = 0; i < arr_obj.size(); i++){
				arr_obj[i] = i + 1;
				std::cout << arr_obj[i] << std::endl;
			}
			try{
				std::cout << "\t+testing copy constructer\n";
				Array<int> copy_obj(arr_obj);
				// std::cout << copy_obj.size() << std::endl;
				for (int i = 0; i < copy_obj.size(); i++)
				{
					if (copy_obj[i] != arr_obj[i])
						std::cout << "data not copied properly\n";
					else
						std::cout << "copy obj array: " << copy_obj[i + 1] << std::endl;
				}

			}catch(std::exception &e)
			{
				std::cout << "copy constructer exception : " << e.what() << std::endl;
			}
		}
		catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}

		
	}
	
	std::cout << std::endl;

	{
		std::cout << "\t+try char type" << std::endl;
		Array<char> arr_obj(26);
		std::cout << "size of char array : " << arr_obj.size() << std::endl;

		try{
			for(int i = 0; i < arr_obj.size(); i++)
			{
				arr_obj[i] = i + 96 + 1;
					
				if (std::isprint(arr_obj[i]))
					std::cout << arr_obj[i] << std::endl;
				else
					std::cout << "index " << i << " not printable :) \n";
			}
			
		}catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}		
		
	}
	
	std::cout << std::endl;

	{
		std::cout << "try empty array" << std::endl;
		Array<int> empty_obj;
		
		std::cout << "size of empty array : " << empty_obj.size() << std::endl;
		try{
			
			empty_obj[empty_obj.size()] = 1;
			std::cout << empty_obj[empty_obj.size()] << std::endl;
			//should throw exception
			
		}catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	return 0;
}
	