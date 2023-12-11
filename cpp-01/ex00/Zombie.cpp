/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:57:13 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/11 11:30:23 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has gone bye-bye" << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
