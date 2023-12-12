/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:50 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 10:45:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*	The order of initialization of data members in a constructor is determined
	by the order they're declared in the class, not the order they're listed
	in the constructor's initializer list */
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
