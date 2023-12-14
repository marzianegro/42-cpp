/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:08:48 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 22:13:09 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal {

public:

	Cat(); // ocf default constructor
	Cat(const Cat &src); // ocf copy constructor
	virtual ~Cat(); // ocf destructor

	Cat&	operator=(const Cat &src); // ocf copy assignment operator

	void	makeSound() const;

private:

	Brain*	_brain;
};

#endif