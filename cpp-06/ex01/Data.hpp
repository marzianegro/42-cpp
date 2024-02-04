/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:09:08 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/04 16:37:59 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

/*	In C++, it's not necessary to use typedef with struct as it is in C.
	In C++, you can directly use the struct name as the type. In C, you would
	need to use typedef to avoid having to write struct every time you
	declare a variable of that type. But in C++, this is not necessary.
*/

struct	Data {
	std::string	aTest;
	int			bTest;
};
