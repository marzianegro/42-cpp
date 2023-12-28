/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:59:27 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:38:53 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>

class	IMateriaSource {

public:
	virtual	~IMateriaSource() {}

	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
