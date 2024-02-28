/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main42.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:47:22 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 09:47:49 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class   Awesome {

public:
	Awesome(void) : _n(42) {
        return ;
    }

	int get(void) const { 
        return (this->_n);
    }

private:
	int _n;
};

std::ostream&   operator<<(std::ostream &o, Awesome const &rhs) {
  o << rhs.get();
  return (o);
}

template <typename T>
void	print(T const &x) {
	std::cout << x << " ";
	return ;
}

int main(void) {
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	::iter(tab, 5, print<const int>);
    std::cout << '\n';
	::iter(tab2, 5, print<Awesome>);
    std::cout << '\n';
	return (0);
}
