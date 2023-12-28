/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:33:44 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:32:48 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <map>
#include <string>

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
