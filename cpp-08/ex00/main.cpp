/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:30:12 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 11:11:49 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	std::vector<int>	intVector;
	std::list<int>		intList;

	std::cout << "\033[1;33mVECTOR CONTAINER\033[0m\n";
	intVector.push_back(1);
	intVector.push_back(2);
	intVector.push_back(3);
	intVector.push_back(4);
	intVector.push_back(5);

	try {
		std::cout << "--- Attempting to find 3 in {1, 2, 3, 4, 5} ---\n";
		std::vector<int>::iterator result = easyfind(intVector, 3);
		std::cout << "easyfind() result: " << *result << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	try {
		std::cout << "\n--- Attempting to find 7 in {1, 2, 3, 4, 5} ---\n";
		std::vector<int>::iterator result = easyfind(intVector, 7);
		std::cout << "easyfind() result: " << *result << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}

	std::cout << "\n\033[1;33mLIST CONTAINER\033[0m\n";
	srand(time(NULL));
	for (int i = 0; i < 30; i++) {
		intList.push_back(rand() % 30);
	}
	std::cout << "intList is: ";
	print(intList);
	std::cout << '\n';
	try {
		std::cout << "--- Attempting to find 42 in intList ---\n";
		std::list<int>::iterator result = easyfind(intList, 42);
		std::cout << "easyfind() result: " << *result << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	try {
		std::cout << "\n--- Attempting to find 16 in intList ---\n";
		std::list<int>::iterator result = easyfind(intList, 16);
		std::cout << "easyfind() result: " << *result << '\n';
	} catch (std::exception &e) {
		std::cout << "Caught exception: " << e.what() << '\n';
	}
	return (0);
}
