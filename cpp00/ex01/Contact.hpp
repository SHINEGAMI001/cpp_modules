/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:48:41 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/20 16:34:56 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>


//colors
# define DEFAULT "\033[0m"
# define RED "\033[91m"
# define YELLOW "\033[33m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"

class Contact{
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
	public:
	Contact(){};
	~Contact(){};

		//setter
		void set_firstname(std::string firstname);
		void set_lastname(std::string lastname);
		void set_nickname(std::string nickname);
		void set_phonenumber(std::string phonenumber);
		void set_darkestsecret(std::string darkestsecret);
		
		//getter
		std::string get_firstname();
		std::string get_lastname();
		std::string get_nickname();
		std::string get_phonenumber();
		std::string get_darkestsecret();
};
#endif