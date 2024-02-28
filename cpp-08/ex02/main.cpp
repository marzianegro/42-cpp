/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:42:42 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 11:11:54 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main() {
	MutantStack<int>	mstack;
	std::list<int>		notmlist;
	
	std::cout << "\033[1;33mTesting with MutantStack\033[0m\n";
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

	std::cout << "\n\033[1;33mTesting with std::list<int>\033[0m\n";
	std::cout << "--- Pushing 5 and 17 to list ---\n";
	notmlist.push_back(5);
	notmlist.push_back(17);
	std::cout << notmlist.back() << " is on top of notmlist\n";

	std::cout << "\n--- Popping one element from notmlist ---\n";
	notmlist.pop_back();
	std::cout << "notmlist is now of size " << notmlist.size() << '\n';

	std::cout << "\n--- Pushing 3, 5, 737, and 0 to notmlist ---\n";
	notmlist.push_back(3);
	notmlist.push_back(5);
	notmlist.push_back(737);
	notmlist.push_back(0);
	std::cout << notmlist.back() << " is on top of notmlist\n";

	std::list<int>::iterator	it_c = notmlist.begin();
	std::list<int>::iterator	it_d = notmlist.end();

	++it_c;
	--it_c;
	std::cout << "\n--- Iterating through notmlist from bottom to top ---\n";
	for (; it_c != it_d; ++it_c) {
		std::cout << *it_c << " ";
	}
	std::cout << std::endl;
	return (0);
}
