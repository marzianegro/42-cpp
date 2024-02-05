/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:19 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/05 15:58:02 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T *addr, size_t len, void (*fn)(T&)) {
	for (size_t i = 0; i < len; i++) {
		fn(addr[i]);
	}
}

template <typename T>
void increment(T& value) {
    ++value;
}
