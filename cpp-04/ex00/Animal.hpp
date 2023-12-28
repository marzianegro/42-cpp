/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:03:12 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:36:53 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal {

public:
	Animal(); // ocf default constructor
	Animal(const Animal &src); // ocf copy constructor
	virtual ~Animal(); // ocf destructor

	Animal&	operator=(const Animal &src); // ocf copy assignment operator

	std::string		getType() const;
	virtual	void	makeSound() const;

protected:
	std::string	_type;
};

#endif
