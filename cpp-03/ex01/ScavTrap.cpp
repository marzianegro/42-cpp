/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 16:04:22 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap naming constructor called" << std::endl;
	this->_name = name;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &source) {
	if (this != &source) {
		this->_name = source._name;
		this->_hitPoints = source._hitPoints;
		this->_energyPoints = source._energyPoints;
		this->_attackDamage = source._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << "! " << target << " loses " << this->_attackDamage << " hit points!" << std::endl;
		this->_energyPoints--;
	} else if (this->_energyPoints < 1) {
		std::cout << "ScavTrap " << this->_name << " can't attack: no energy points left!" << std::endl;
	} else if (this->_hitPoints < 1) {
		std::cout << "ScavTrap " << this->_name << " can't attack: no hit points left!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap" << this->_name << " is now in Gate keeper mode" << std::endl;
}
