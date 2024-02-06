/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:42:42 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/06 18:11:52 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main() {
	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << '\n';
	
	mstack.pop();
	std::cout << mstack.size() << '\n';

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it1 = mstack.begin();
	MutantStack<int>::iterator	it2 = mstack.end();

	++it1;
	--it1;
	while (it1 != it2) {
		std::cout << *it1 << '\n';
		++it;
	}
	std::stack<int>	s(mstack);
	return (0);
}
