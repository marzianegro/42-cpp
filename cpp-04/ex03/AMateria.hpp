/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:16:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 16:01:35 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class	ICharacter;

class	AMateria {

public:

	AMateria(); // ocf default constructor
	AMateria(const AMateria &src); // ocf copy constructor
	AMateria(std::string const &type);
	virtual ~AMateria(); // ocf destructor

	AMateria&	operator=(const AMateria &src); // ocf copy assignment operator

	std::string const& getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void	use(ICharacter &target);

protected:

	std::string	_type;
};

#endif
