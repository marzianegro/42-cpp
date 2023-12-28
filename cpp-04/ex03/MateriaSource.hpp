/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:36:09 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:39:10 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {

public:
	MateriaSource(); // ocf default constructor
	MateriaSource(const MateriaSource &src); // ocf copy constructor
	~MateriaSource(); // ocf destructor

	MateriaSource&	operator=(const MateriaSource &src); // ocf copy assignment operator

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const &type);

private:
	std::string	_type;
	AMateria*	_inventory[4];
};

#endif
