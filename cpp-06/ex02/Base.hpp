/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:36 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:11:53 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Base {

public:
	Base(); // ocf default constructor
	Base(const Base &src); // ocf copy constructor
	virtual ~Base(); // ocf destructor

	Base&	operator=(const Base &src); // ocf copy assignment operator

	Base*	generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

private:
};
