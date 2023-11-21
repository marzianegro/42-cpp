/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:59:56 by mnegro            #+#    #+#             */
/*   Updated: 2023/11/21 13:10:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::addContact(void) {
	find the right _index;
	prompt to input _firstName and save as such;
	prompt to input _lastName and save as such;
	prompt to input _nickName and save as such;
	prompt to input _phoneNumber
		check if it's valid
		save as such;
	prompt to input _darkestSecret and save as such;
	if there are empty fields
		display an error;
	otherwise
		add the contact to the phonebook;
}

PhoneBook::searchContact(void) {
	while contacts are found in the phonebook
		print each one as _index | _firstName | _lastName | _nickName
			// each column must be 10 chars wide
			// the text must be right-aligned
			// if text longer than column, truncate it and replace last displayable charatcer by .
	prompt user for the _index of the entry to display
	if _index is out of range or wrong
		display an error;
		prompt user for an _index between 1 and 7
	otherwise
		display contact's info, one field per line
		// while loop?
}

PhoneBook::~PhoneBook(void) {
	return ;
}
