/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:36 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/04 18:03:46 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>

class	Base {

public:
	virtual ~Base();
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
