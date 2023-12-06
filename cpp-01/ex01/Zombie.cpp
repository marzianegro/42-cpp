/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:38:35 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 15:33:24 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	return ;
}

Zombie::~Zombie() {
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ... Moar brainz!" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}
