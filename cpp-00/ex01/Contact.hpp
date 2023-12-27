/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:54:30 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:30:20 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {

public:
	Contact(void);
	~Contact(void);

	int			getIndex(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

	void	setIndex(int index);
	void	setFirstName(std::string info);
	void	setLastName(std::string info);
	void	setNickName(std::string info);
	void	setPhoneNumber(std::string info);
	void	setDarkestSecret(std::string info);

	void	printContact(void) const;

private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
