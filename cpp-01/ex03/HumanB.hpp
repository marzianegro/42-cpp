/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:58 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 16:26:06 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class	HumanB {

public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon weapon);

private:
	Weapon	_weapon;
	std::string	_name;

};

#endif
