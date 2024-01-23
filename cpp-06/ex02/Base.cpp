/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:17:18 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:20:00 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base() {
	std::cout << "Base default constructor called\n";
}

Base::Base(const Base &src) {
	std::cout << "Base copy constructor called\n";
	*this = src;
}

Base::~Base() {
	std::cout << "Base destructor called\n";
}

Base&	Base::operator=(const Base &src) {
	if (this != &src) {

	}
	return (*this);
}

Base*	Base::generate(void) {

}

void	Base::identify(Base* p) {

}

void	Base::identify(Base& p) {
	
}
