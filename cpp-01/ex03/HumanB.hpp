/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:58 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:32:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

public:
	HumanB(std::string name);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);

private:
	Weapon *_weapon;
	std::string	_name;
};

#endif
