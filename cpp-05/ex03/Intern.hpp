/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:25:22 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/29 02:33:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	AForm;

class	Intern {

public:
	Intern(); // ocf default constructor
	Intern(const Intern &src); // ocf copy constructor
	~Intern(); // ocf destructor

	Intern&	operator=(const Intern &src);

	AForm&	makeForm(std::string name, std::string target); 
};
