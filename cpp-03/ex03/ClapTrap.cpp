/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:28 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:30:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
}

ClapTrap::ClapTrap(const std::string &name) {
	std::cout << "ClapTrap naming constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &src) {
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	// (1) check hit (health) points, (2) check energy (mana) points, (3) check attack damage to be done
	if (this->_hitPoints > 0 && this->_energyPoints > 0 && this->_attackDamage > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<
					", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	} else if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't attack: no hit point(s) left!" << std::endl;
	} else if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't attack: no energy point(s) left!" << std::endl;
	} else if (this->_attackDamage < 1) {
		std::cout << "ClapTrap " << this->_name << " can't attack: no damage to be done!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage; ";
	this->_hitPoints -= amount;
	std::cout << this->_hitPoints << " hit point(s) left" << std::endl;
	if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " has no more hit points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	// (1) check hit (health) points, (2) check energy (mana) points
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " repairs itself: " << amount << " hit point(s) restored!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	} else if (this->_hitPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't repair itself: no hit points left!" << std::endl;
	} else if (this->_energyPoints < 1) {
		std::cout << "ClapTrap " << this->_name << " can't repair itself: no energy points left!" << std::endl;
	}
}

void	ClapTrap::getStats() {
	std::cout << std::endl <<
				"ClapTrap " << this->_name << "'s current stats are: " << std::endl <<
				"- Hit points (health): " << this->_hitPoints << std::endl << 
				"- Energy points: " << this->_energyPoints << std::endl <<
				"- Attack damage: " << this->_attackDamage << std::endl << std::endl;
}
