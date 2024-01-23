/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:12:24 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:16:51 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class	C : public Base {

public:
	C(); // ocf default constructor
	C(const C &src); // ocf copy constructor
	~C(); // ocf destructor

	C&	operator=(const C &src); // ocf copy assignment operator

private:

};
