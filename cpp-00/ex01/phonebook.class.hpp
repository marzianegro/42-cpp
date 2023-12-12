/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:42 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 10:28:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"
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
