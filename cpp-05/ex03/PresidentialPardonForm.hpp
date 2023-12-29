/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:36 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/29 02:26:30 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class	PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm(); // ocf constructor
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src); // ocf copy constructor
	~PresidentialPardonForm(); // ocf destructor

	PresidentialPardonForm&	operator=(const PresidentialPardonForm &src); // ocf copy assignment operator

	void	execute(Bureaucrat const &executor) const;

private:
	std::string			_target;
};

