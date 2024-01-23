/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:13:07 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:15:43 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class	A : public Base {

public:
	A(); // ocf default constructor
	A(const A &src); // ocf copy constructor
	~A(); // ocf destructor

	A&	operator=(const A &src); // ocf copy assignment operator

private:

};
