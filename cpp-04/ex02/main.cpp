/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:30:39 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 22:13:04 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{

	const AAnimal*	animals[10];
	
	std::cout << "\n----------\n";
	std::cout << "\nanimals[0-4] is being filled with Dog objects\n\n";
	for (int i = 0; i < 5; i++) {
		animals[i] = new Dog();
	}
	std::cout << "\n----------\n";
	std::cout << "\n----------\n";
	std::cout << "\nanimals[5-9] is being filled with Cat objects\n\n";
	for (int i = 5; i < 10; i++) {
		animals[i] = new Cat();
	}
	std::cout << "\n----------\n";
	std::cout << "\n----------\n";
	std::cout << "\nNow deleting animals[0-9]\n\n";
	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}
	std::cout << "\n----------\n";
	return (0);
}
