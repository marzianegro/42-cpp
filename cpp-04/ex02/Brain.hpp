/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:19:23 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 21:58:30 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain {

public:

	Brain(); // ocf default constructor
	Brain(const Brain &src); // ocf copy constructor
	~Brain(); // ocf destructor

	Brain&	operator=(const Brain &src); // ocf copy assignment operator

private:

	std::string	_ideas[100];
};

#endif
