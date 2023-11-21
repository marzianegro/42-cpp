/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:02:05 by mnegro            #+#    #+#             */
/*   Updated: 2023/11/21 13:10:23 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"
#include "phonebook.class.hpp"

int main(int ac, char **av)
{
	PhoneBook	instance;
	std::string	cmd;
	
	std::cout << "Please enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
	while (std::getline(std::cin, cmd))
	{
		if (cmd.compare("ADD") == 0)
			instance.addContact();
		else if (cmd.compare("SEARCH") == 0)
			instance.searchContact();
		else if (cmd.compare("EXIT") == 0)
			return (0);
		// once a command has been correctly executed, the program waits for another one.
	}
	return (0);
}
