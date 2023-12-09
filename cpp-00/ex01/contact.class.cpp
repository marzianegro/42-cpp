/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:58:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 19:18:59 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

int	Contact::getIndex(void) const {
	return (this->_index);
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const {
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);
}

void	Contact::setIndex(int index) {
	this->_index = index;
}

void	Contact::setFirstName(std::string info) {
	this->_firstName = info;
}

void	Contact::setLastName(std::string info) {
	this->_lastName = info;
}

void	Contact::setNickName(std::string info) {
	this->_nickName = info;
}

void	Contact::setPhoneNumber(std::string info) {
	this->_phoneNumber = info;
}

void	Contact::setDarkestSecret(std::string info) {
	this->_darkestSecret = info;
}

void	Contact::printContact(void) const {

	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
