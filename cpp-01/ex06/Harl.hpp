/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:33:44 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/06 19:31:46 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class	Harl {

public:

	Harl();
	~Harl();
	void	complain(std::string level);

private:

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const ;
	typedef	void	(Harl::*MemFn)() const;
};

#endif
