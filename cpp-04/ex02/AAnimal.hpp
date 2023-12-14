/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:03:12 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 22:10:51 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	An abstract class in C++ is a class that has at least one pure virtual
	function. A pure virtual function is declared by assigning 0 in
	its declaration. The purpose of an abstract class (often referred to as
	an ABC, for Abstract Base Class) is to provide an appropriate base class
	from which other classes can inherit. Abstract classes cannot be used
	to instantiate objects and serves only as an interface. Attempting to
	instantiate an object of an abstract class causes a compilation error */

/*	Classes that contain at least one pure virtual function are considered
	abstract. If a subclass of an ABC needs to be instantiable, it has to
	implement all the pure virtual functions of its parent classes */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal {

public:

	AAnimal(); // ocf default constructor
	AAnimal(const AAnimal &src); // ocf copy constructor
	virtual ~AAnimal(); // ocf destructor

	AAnimal&	operator=(const AAnimal &src); // ocf copy assignment operator

	std::string	getType() const;
	virtual	void	makeSound() const = 0;

protected:

	std::string	_type;
};

#endif
