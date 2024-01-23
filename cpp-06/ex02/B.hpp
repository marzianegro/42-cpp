/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:13:49 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 15:16:25 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class	B : public Base {

public:
	B(); // ocf default constructor
	B(const B &src); // ocf copy constructor
	~B(); // ocf destructor

	B&	operator=(const B &src); // ocf copy assignment operator

private:

};
