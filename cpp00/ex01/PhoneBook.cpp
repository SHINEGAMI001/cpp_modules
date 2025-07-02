/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 04:53:16 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/26 16:45:53 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){_index = 0, _current = 0;}

std::string resize(std::string str)
{
	if (str.length() > 10)
	{
		str.erase(str.begin() + 9, str.end());
		str.append(".");
	}
	return (str);
}

void PhoneBook::display_contacts()
{
	std::cout << BLUE << "|  index   |first name|last name |nick name |" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	
	for (int i = 0; i < this->_index; i++)
	{
		std::cout << "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(this->_contacts[i].get_firstname())
		<< "|" << std::setw(10) << resize(this->_contacts[i].get_lastname())
		<< "|" <<std::setw(10) <<  resize(this->_contacts[i].get_nickname())
		<< "|" << std::endl;
	}
	std::cout << "+-------------------------------------------+" << DEFAULT << std::endl;
}

void PhoneBook::ft_search(){
	
	int index;
	display_contacts();
	std::cout << BLUE << "Choose Index > " << DEFAULT;
	std::cin >> index;
	if (std::cin.fail())
		std::cout << RED << "!!!!!! Invalid Index !!!!!!" << DEFAULT << std::endl;
	else if (index < this->_index)
	{
		std::cout << BLUE << " First Name: " << this->_contacts[index].get_firstname() << std::endl;
		std::cout << " Last Name: " << this->_contacts[index].get_lastname() << std::endl;
		std::cout << " Nick Name: " << this->_contacts[index].get_nickname() << std::endl;
		std::cout << " Phone Number: " << this->_contacts[index].get_phonenumber() << std::endl;
		std::cout << " darkest secret: " << this->_contacts[index].get_darkestsecret() << DEFAULT << std::endl;
	}
	else
		std::cout << RED << "------ Doesnt exist ------" << DEFAULT << std::endl;
	std::cout << "total contacts " << this->_current << std::endl;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	
}

void PhoneBook::ft_add(){

	Contact temp;
	// unsigned int phone_number;

	std::cout << " First Name :";
	std::getline(std::cin, _firstname);
	temp.set_firstname(_firstname);
	std::cout << " Last Name :";
	std::getline(std::cin, _lastname);
	temp.set_lastname(_lastname);
	std::cout << " Nick Name :";
	std::getline(std::cin, _nickname);
	temp.set_nickname(_nickname);
	std::cout << " Phone Number :";
	std::getline(std::cin, _phonenumber);
	temp.set_phonenumber(_phonenumber);
	std::cout << " Darkest Secret :";
	std::getline(std::cin, _darkestsecret);
	temp.set_darkestsecret(_darkestsecret);
	this->_contacts[_current % 8] = temp;
	_current++;
	if (_current <= 8)
		this->_index = this->_current;
	std::cout << GREEN << "++++++ Contact Added Succesfuly ++++++" << DEFAULT << std::endl;
}

int main()
{
	PhoneBook phonebook;
	std::string command;

	std::cout << YELLOW ;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "|           Choose option to continue:             |" << std::endl;
	std::cout << "|                        1 - ADD                   |" << std::endl;
	std::cout << "|                        2 - SEARCH                |" << std::endl;
	std::cout << "|                        3 - EXIT                  |" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << DEFAULT << std::endl;

	while (42)
	{
		std::cout << YELLOW << "Choose Option > " << DEFAULT;
		std::getline(std::cin, command);
		if (command == "1")
			phonebook.ft_add();
		else if (command == "2")
			phonebook.ft_search();
		else if (command == "3")
		{
			std::cout << YELLOW << "  ! GOOD BYE !" << DEFAULT << std::endl;
			break;
		}
		else
			std::cout << RED << "!!!!!! Choose valid Option !!!!!!" << DEFAULT << std::endl;
	}

	return (0);
	
}

