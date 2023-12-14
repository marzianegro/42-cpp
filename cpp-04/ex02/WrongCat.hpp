/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:51:14 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 15:18:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat(); // ocf default constructor
	WrongCat(const WrongCat &src); // ocf copy constructor
	virtual ~WrongCat(); // ocf destructor

	WrongCat&	operator=(const WrongCat &src); // ocf copy assignment operator

	// void	makeSound() const;
};

#endif
