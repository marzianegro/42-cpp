/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:41 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 16:31:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class	HumanA {

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void) const;

private:
	Weapon&	_weapon;
	std::string	_name;

};

#endif
