/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:19 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/26 16:36:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T *addr, size_t len, void (*fn)(T const &)) {
	for (size_t i = 0; i < len; i++) {
		fn(addr[i]);
	}
}

template <typename T>
void    somethingFun(T const &var) {
    std::cout << var << '\n';
}
