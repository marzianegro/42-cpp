/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:42 by mnegro            #+#    #+#             */
/*   Updated: 2023/11/21 13:10:40 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class	PhoneBook {

public:
		
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);
	void	searchContact(void);

private:

	Contact		contacts[8];
	static int	_i;
};

#endif
