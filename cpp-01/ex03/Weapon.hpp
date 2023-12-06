/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:41:26 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/04 16:27:43 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

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
