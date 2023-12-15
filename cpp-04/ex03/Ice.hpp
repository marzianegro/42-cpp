/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:28:43 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 16:28:13 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria {

public:

	Ice(); // ocf default constructor
	Ice(const Ice &src); // ocf copy constructor
	~Ice(); // ocf destructor

	Ice&	operator=(const Ice &src); // ocf copy assignment operator

	AMateria*	clone() const;
	void	use(ICharacter &target);
};

#endif
