/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:28 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 16:03:29 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energyPoints = source._energyPoints;
	this->_attackDamage = source._attackDamage;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap naming constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &source) {
	if (this != &source) {
		this->_name = source._name;
		this->_hitPoints = source._hitPoints;
		this->_energyPoints = source._energyPoints;
		this->_attackDamage = source._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << "! " << target << " loses " << this->_attackDamage << " hit points!" << std::endl;
		this->_energyPoints--;
	} else if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't attack: no energy points left!" << std::endl;
	} else if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't attack: no hit points left!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage! " << amount << " hit points lost!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << "has no more hit points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " repairs itself: " << amount << " hit points restored!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	} else if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't repair itself: no energy points left!" << std::endl;
	} else if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't repair itself: no hit points left!" << std::endl;
	}
}

void	ClapTrap::getStats() {
	std::cout << std::endl <<
				"ClapTrap " << this->_name << "'s current stats are: " << std::endl <<
				"- Hit points (health): " << this->_hitPoints << std::endl << 
				"- Energy points: " << this->_energyPoints << std::endl <<
				"- Attack damage: " << this->_attackDamage << std::endl << std::endl;
}
