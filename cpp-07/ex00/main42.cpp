/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main42.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:43:56 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 09:44:27 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class	Awesome {

public:
	Awesome(void) : _n(0) {}
	Awesome(int n) : _n(n) {}
	Awesome&	operator=(Awesome &a) {
		_n = a._n;
		return (*this);
	}

	bool operator==(Awesome const &rhs) const {
		return (this->_n == rhs._n);
	}
	bool operator!=(Awesome const &rhs) const {
		return (this->_n != rhs._n);
	}
	bool operator>(Awesome const &rhs) const {
		return (this->_n > rhs._n);
	}
	bool operator<(Awesome const &rhs) const {
		return (this->_n < rhs._n);
	}
	bool operator>=(Awesome const &rhs) const {
		return (this->_n >= rhs._n);
	}
	bool operator<=(Awesome const &rhs) const {
		return (this->_n <= rhs._n);
	}

	int get_n() const {
		return (_n);
	}

private:
	int	_n;
};

std::ostream&	operator<<(std::ostream &o, const Awesome &a) {	
	o << a.get_n();
	return (o);
}

int	main(void)
{
	Awesome	a(2), b(4);

	std::cout << "Before swap(a, b): a = " << a << ", b = " << b << '\n';
	::swap(a, b);
	std::cout << "After swap(a, b): a = " << a << ", b = " << b << '\n';
	std::cout << "min(a, b) = " << ::min(a, b) << '\n';
	std::cout << "max(a, b) = " << ::max(a, b) << '\n';
	return (0);
}
