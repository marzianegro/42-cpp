/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:36 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 18:53:07 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class	ShrubberyCreationForm : public AForm {

public:
	ShrubberyCreationForm(); // ocf default constructor
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src); // ocf copy constructor
	~ShrubberyCreationForm(); // ocf destructor

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &src); // ocf copy assignment operator

	void	execute(Bureaucrat const &executor) const;

private:
	std::string			_target;
};

