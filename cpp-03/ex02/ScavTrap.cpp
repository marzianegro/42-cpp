/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:29:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap naming constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &src) {
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	// (1) check hit (health) points, (2) check energy (mana) points, (3) check attack damage to be done
	if (this->_hitPoints > 0 && this->_energyPoints > 0 && this->_attackDamage > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<
					", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	} else if (this->_hitPoints < 1) {
		std::cout << "ScavTrap " << this->_name << " can't attack: no hit point(s) left!" << std::endl;
	} else if (this->_energyPoints < 1) {
		std::cout << "ScavTrap " << this->_name << " can't attack: no energy point(s) left!" << std::endl;
	} else if (this->_attackDamage < 1) {
		std::cout << "ScavTrap " << this->_name << " can't attack: no damage to be done!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode" << std::endl;
}
