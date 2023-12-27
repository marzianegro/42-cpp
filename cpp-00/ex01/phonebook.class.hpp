/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:42 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:31:49 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <stdlib.h>

class	PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);

private:
	Contact		_contacts[8];
	int			_i;
};

#endif
