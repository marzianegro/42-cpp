/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:41:06 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 17:02:36 by mnegro           ###   ########.fr       */
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

//// Evalutation Sheet Test ex01.cpp)
// class   Awesome {

// public:
// 	Awesome(void) : _n(42) {
//         return ;
//     }

// 	int get(void) const { 
//         return (this->_n);
//     }

// private:
// 	int _n;
// };

// std::ostream&   operator<<(std::ostream &o, Awesome const &rhs) {
//   o << rhs.get();
//   return (o);
// }

// template <typename T>
// void	print(T &x) {
// 	std::cout << x << " ";
// 	return ;
// }

// int main(void) {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	::iter(tab, 5, print<const int>); // make iter function for const values?
//     std::cout << '\n';
// 	::iter(tab2, 5, print<Awesome>);
//     std::cout << '\n';
// 	return (0);
// }
