/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:46:04 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:38:01 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal {

public:
	WrongAnimal(); // ocf default constructor
	WrongAnimal(const WrongAnimal &src); // ocf copy constructor
	virtual ~WrongAnimal(); // ocf destructor

	WrongAnimal&	operator=(const WrongAnimal &src); // ocf copy assignment operator

	std::string	getType() const;
	void		makeSound() const;

protected:
	std::string _type;
};

#endif
