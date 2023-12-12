/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:59:56 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 10:28:39 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) {
	this->_i = 0;
	this->_contacts[0].setIndex(0);
	this->_contacts[1].setIndex(0);
	this->_contacts[2].setIndex(0);
	this->_contacts[3].setIndex(0);
	this->_contacts[4].setIndex(0);
	this->_contacts[5].setIndex(0);
	this->_contacts[6].setIndex(0);
	this->_contacts[7].setIndex(0);
	return ;
}

void	checkPhoneNumber(std::string &number) {
	for (size_t i = 0; i < number.length(); i++) {
		if (!std::isdigit(number[i])) {
			std::cout << "Error: phone number must only contain digits! ";
			number = "";
			return ;
		}
	}
	if (number.length() != 10) {
		std::cout << "Error: phone number must be 10 digits long! ";
		number = "";
		return ;
	}
}

std::string	checkString(std::string prompt) {
	std::string	info = "";

	while (info.length() == 0)
	{
		std::cout << "Please enter contact's " << prompt << ": ";
		std::getline(std::cin, info);
		if (std::cin.eof())
			exit(1);
		if (info.length() == 0) {
			std::cout << "Error: field can't be empty! ";
		}
		if (prompt.compare("phone number") == 0) {
			checkPhoneNumber(info);
		}
	}
	return (info);
}


void	PhoneBook::addContact(void) {
	std::string	info;

	if (this->_i >= 8) {
		this->_i = 0;
	}
	this->_contacts[this->_i].setIndex(this->_i + 1);
	this->_contacts[this->_i].setFirstName(checkString("first name"));
	this->_contacts[this->_i].setLastName(checkString("last name"));
	this->_contacts[this->_i].setNickName(checkString("nick name"));
	this->_contacts[this->_i].setPhoneNumber(checkString("phone number"));
	this->_contacts[this->_i].setDarkestSecret(checkString("darkest secret"));
	this->_i++;
}

void	printInfo(std::string info) {
	int	spaces = 10 - info.length();
	
	if (info.length() > 10) {
		std::cout << info.substr(0, 9) << ".";
	} else {
		for (int i = 0; i < spaces; i++)
			std::cout << " ";
		std::cout << info;
	}
	std::cout << "|";
}

void	PhoneBook::searchContact(void) {
	std::string	str;
	int			index;

	std::cout << "|**********|**********|**********|**********|\n";
	std::cout << "|     index| firstname|  lastname|  nickname|\n";
	std::cout << "|**********|**********|**********|**********|\n";
	for (int i = 0; i < 8; i++) {
		if (this->_contacts[i].getIndex() == 0) {
			continue ;
		}
		std::cout << "|         " << this->_contacts[i].getIndex() << "|";
		printInfo(this->_contacts[i].getFirstName());
		printInfo(this->_contacts[i].getLastName());
		printInfo(this->_contacts[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "|**********|**********|**********|**********|\n";
	std::cout << "Please enter an index between 1 and 8: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
			exit(1);
	index = std::atoi(str.c_str());
	if (index < 1 || index > 8) {
		std::cout << "Error: index is out of range!" << std::endl;
	} else {
 		this->_contacts[index - 1].printContact();
	}
}

PhoneBook::~PhoneBook(void) {
	return ;
}
