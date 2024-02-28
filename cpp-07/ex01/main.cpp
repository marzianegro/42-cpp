/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:06 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 09:47:38 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main() {
    int	arr[] = {1, 2, 3, 4, 5};
    size_t	len = sizeof(arr) / sizeof(int);

    std::cout << "Before incrementing:\n";
    ::iter(arr, len, ::somethingFun<const int>);
    std::cout << '\n';

    for (size_t i = 0; i < len; i++) {
        arr[i] += 1;
    }
    std::cout << "After incrementing:\n";
    ::iter(arr, len, ::somethingFun<const int>);
    return (0);
}
