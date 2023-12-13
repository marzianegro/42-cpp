/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:01:38 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/13 13:32:15 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints; // 100
	this->_energyPoints = ScavTrap::_energyPoints; // 50
	this->_attackDamage = FragTrap::_attackDamage; // 30
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap naming constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints; // 100
	this->_energyPoints = ScavTrap::_energyPoints; // 50
	this->_attackDamage = FragTrap::_attackDamage; // 30
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &src) {
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << this->ClapTrap::_name << std::endl;
}
