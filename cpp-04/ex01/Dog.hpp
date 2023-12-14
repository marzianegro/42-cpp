/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:05:51 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 15:42:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

public:

	Dog(); // ocf default constructor
	Dog(const Dog &src); // ocf copy constructor
	virtual ~Dog(); // ocf destructor

	Dog&	operator=(const Dog &src); // ocf copy assignment operator

	void	makeSound() const;
};

#endif
