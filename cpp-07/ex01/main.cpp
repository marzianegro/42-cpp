/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:06 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/05 15:58:31 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& n) {
    n++;
}

int	main() {
    int	arr[] = {1, 2, 3, 4, 5};
    size_t	len = sizeof(arr) / sizeof(int);

    std::cout << "Before incrementing: ";
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    ::iter(arr, len, ::increment<int>);

    std::cout << "After incrementing: ";
    for (size_t i = 0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
    return (0);
}
