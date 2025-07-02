/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <hlachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:07:29 by hlachhab          #+#    #+#             */
/*   Updated: 2025/06/27 15:37:58 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string Contact::get_firstname(){
	return (this->_firstname);
}

std::string Contact::get_lastname(){
	return (this->_lastname);
}

std::string Contact::get_nickname(){
	return (this->_nickname);
}

std::string Contact::get_phonenumber(){
	return (this->_phonenumber);
}

std::string Contact::get_darkestsecret(){
	return (this->_darkestsecret);
}

//

void Contact::set_firstname(std::string firstname){
	this->_firstname = firstname;
}

void Contact::set_lastname(std::string lastname){
	this->_lastname = lastname;
}

void Contact::set_nickname(std::string nickname){
	this->_nickname = nickname;
}

void Contact::set_phonenumber(std::string phonenumber){
	this->_phonenumber = phonenumber;
}

void Contact::set_darkestsecret(std::string darkestsecret){
	this->_darkestsecret = darkestsecret;
}