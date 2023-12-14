/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:37:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 23:56:33 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>

class	AMateria;

class	ICharacter {

public:

	virtual ~ICharacter() {}
	virtual std::string const&	getName() const = 0;
	virtual void	equip(AMateria *m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter &target) = 0;
};

#endif
