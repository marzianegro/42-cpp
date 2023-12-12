/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:33:51 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 11:00:35 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	return ;
}

Harl::~Harl() {
	return ;
}

/*	Pointers to member functions in C++ are used to store and invoke member
	functions of a class. They can be particularly useful in certain scenarios,
	inluding a Function Table. If you have a set of member functions that you
	want to call based on some condition or input, you can create a table (array)
	of pointers to member functions. You can then index into the table to call
	the appropriate function. */
void	Harl::complain(std::string level) {
	MemFn		complaintFn[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complaintLvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level.compare(complaintLvl[i]) == 0) {
			(this->*complaintFn[i])();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

// Contextual information, mostly used for problem diagnosis
void	Harl::debug(void) const {
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

// Extensive information, helpful for tracing program execution in a production environment
void	Harl::info(void) const {
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

// Potential issue in the system; can be handled or ignored
void	Harl::warning(void) const {
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

// Unrecoverable errror has occurred; critical issue that requires manual intervention
void	Harl::error(void) const {
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
