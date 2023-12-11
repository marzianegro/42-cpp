/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:02:05 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/11 13:21:40 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
#include "phonebook.class.hpp"

int main(void)
{
	PhoneBook	crappy;
	std::string	cmd;
	
	std::cout << "Please enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
	std::getline(std::cin, cmd);
	while (cmd.compare("EXIT") != 0)
	{
		if (std::cin.eof())
			return (1);
		if (cmd.compare("ADD") == 0) {
			crappy.addContact();
		} else if (cmd.compare("SEARCH") == 0) {
			crappy.searchContact();
		} else {
			std::cout << "Error: invalid command! ";
		}
		std::cout << "Please enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, cmd);
	}
	std::cout << "Sorry not sorry: crappy lost all your contacts forever :P\n";
	return (0);
}
