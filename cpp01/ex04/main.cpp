/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:20:50 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/29 19:03:41 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int check_args(std::string s1, std::string s2)
{
	if (s1.empty())
	{
		std::cout << "S1 CANNOT BE EMPTY !!" << std::endl;
		return -1;
	}
	if (s2.empty())
	{
		std::cout << "S2 CANNOT BE EMPTY !!" << std::endl;
		return -1;
	}
	return 0;
}

std::string ft_replace(std::string line, std::string r_this, std::string r_with)
{
	int start = line.find(r_this);
	if (start != -1)
	{
		line.erase(start, r_this.length());
		line.insert(start, r_with);
	}
	return line;
	
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "args error !!" << std::endl;
		return 1;
	}
	std::string line;
	std::ifstream in_line(av[1]);
	if (in_line.is_open())
	{
		std::string f_name(av[1]);
		if (check_args(av[2], av[3]) == -1)
			return 1;
		std::ofstream out_file(f_name + ".replace");
		while (std::getline(in_line, line))
		{
			line = ft_replace(line, av[2], av[3]);
			out_file << line << std::endl;
		}
		in_line.close();
		
	}
	else
	{
		std::cout << "file error !!" << std::endl;
	}
	return 0;
}