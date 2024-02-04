/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:17:18 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/04 18:08:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
	std::cout << "Base destructor called\n";
}

Base*	generate(void) {
	std::string	whatLetter = "ABC";
	int	randomLetter = rand() % 3;

	switch (whatLetter[randomLetter]) {
		case 'A':
			return (new A());
		case 'B':
			return (new B());
		case 'C':
			return (new C());
		default:
			return (NULL);
	}
}

/*	In C++, dynamic_cast is used for handling polymorphism. When you have
	a pointer to a base class (Base* p), you can't directly know the actual
	derived type of the object it points to. However, if you have a
	hierarchy of classes and you want to know the actual type of the object
	at runtime, you can use dynamic_cast. It will check if the type you're
	trying to cast to is a valid type for the object. If it is, it will
	perform the cast, otherwise it will return nullptr.
*/
void	identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "Object pointed to by p is of type A\n";
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Object pointed to by p is of type B\n";
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "Object pointed to by p is of type C\n";
	} else {
		std::cout << "Object pointed to by p is of type unknown\n";
	}
}

void	identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "Object pointed to by p is of type A\n";
		(void)a;
		return ;
	} catch (const std::exception &e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "Object pointed to by p is of type B\n";
		(void)b;
		return ;
	} catch (const std::exception &e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "Object pointed to by p is of type C\n";
		(void)c;
		return ;
	} catch (const std::exception &e) {}
	std::cout << "Object pointed to by p is of type unknown\n";
}
