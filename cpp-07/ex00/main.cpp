/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:19:36 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 16:59:59 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void) {
	int a = 2;
	int	b = 3;

	std::cout << "----- Test #1 -----\n";
	std::cout << "Before swap(a, b): a = " << a << ", b = " << b << '\n';
	::swap(a, b);
	std::cout << "After swap(a, b): a = " << a << ", b = " << b << '\n';
	std::cout << "min(a, b) = " << ::min(a, b) << '\n';
	std::cout << "max(a, b) = " << ::max(a, b) << '\n';

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "\n----- Test #2 -----\n";
	std::cout << "Before swap(c, d): c = " << c << ", d = " << d << '\n';
	::swap(c, d);
	std::cout << "After swap(c, d): c = " << c << ", d = " << d << '\n';
	std::cout << "min(c, d) = " << ::min(c, d) << '\n';
	std::cout << "max(c, d) = " << ::max(c, d) << '\n';
	return (0);
}

//// Evaluation Sheet Test ex00.cpp
// class	Awesome {

// public:
// 	Awesome(void) : _n(0) {}
// 	Awesome(int n) : _n(n) {}
// 	Awesome&	operator=(Awesome &a) {
// 		_n = a._n;
// 		return (*this);
// 	}

// 	bool operator==(Awesome const &rhs) const {
// 		return (this->_n == rhs._n);
// 	}
// 	bool operator!=(Awesome const &rhs) const {
// 		return (this->_n != rhs._n);
// 	}
// 	bool operator>(Awesome const &rhs) const {
// 		return (this->_n > rhs._n);
// 	}
// 	bool operator<(Awesome const &rhs) const {
// 		return (this->_n < rhs._n);
// 	}
// 	bool operator>=(Awesome const &rhs) const {
// 		return (this->_n >= rhs._n);
// 	}
// 	bool operator<=(Awesome const &rhs) const {
// 		return (this->_n <= rhs._n);
// 	}

// 	int get_n() const {
// 		return (_n);
// 	}

// private:
// 	int	_n;
// };

// std::ostream&	operator<<(std::ostream &o, const Awesome &a) {	
// 	o << a.get_n();
// 	return (o);
// }

// int	main(void)
// {
// 	Awesome	a(2), b(4);

// 	std::cout << "Before swap(a, b): a = " << a << ", b = " << b << '\n';
// 	::swap(a, b);
// 	std::cout << "After swap(a, b): a = " << a << ", b = " << b << '\n';
// 	std::cout << "min(a, b) = " << ::min(a, b) << '\n';
// 	std::cout << "max(a, b) = " << ::max(a, b) << '\n';
// 	return (0);
// }
