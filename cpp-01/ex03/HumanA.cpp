/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:50 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 16:31:31 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA() {
	return ;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}
