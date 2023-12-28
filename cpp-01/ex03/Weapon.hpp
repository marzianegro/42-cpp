/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:26 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:32:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	const std::string&	getType(void) const;
	void	setType(std::string type);

private:
	std::string	_type;
};

#endif
