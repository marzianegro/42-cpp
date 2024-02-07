/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:42:42 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 11:23:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main() {
	MutantStack<int>	mstack;
	
	std::cout << "--- Pushing 5 and 17 to mstack ---\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << " is on top of mstack\n";

	std::cout << "\n--- Popping one element from mstack ---\n";
	mstack.pop();
	std::cout << "mstack is now of size " << mstack.size() << '\n';

	std::cout << "\n--- Pushing 3, 5, 737, and 0 to mstack ---\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << mstack.top() << " is on top of mstack\n";

	MutantStack<int>::iterator	it_a = mstack.begin();
	MutantStack<int>::iterator	it_b = mstack.end();

	++it_a;
	--it_a;
	std::cout << "\n--- Iterating through mstack from bottom to top ---\n";
	for (; it_a != it_b; ++it_a) {
		std::cout << *it_a << " ";
	}
	std::cout << std::endl;
	std::stack<int>	mstack_copy(mstack);
	return (0);
}
