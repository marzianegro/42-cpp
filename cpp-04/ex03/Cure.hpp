/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:26:53 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:38:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria {

public:
	Cure(); // ocf default constructor
	Cure(const Cure &src); // ocf copy constructor
	~Cure(); // ocf destructor

	Cure&	operator=(const Cure &src); // ocf copy assignment operator

	AMateria*	clone() const;
	void		use(ICharacter &target);
};

#endif
