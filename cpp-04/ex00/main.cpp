/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:30:39 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 15:02:37 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*	animal = new Animal();
	const Animal*	cat = new Cat();
	const Animal*	dog = new Dog();
	const WrongAnimal*	wrong_animal = new WrongAnimal();
	const WrongAnimal*	wrong_cat = new WrongCat();

	std::cout << "\nBase class Animal + Sub-classes Cat and Dog\n";
	std::cout << "----------\n";
	std::cout << "Class: Animal\n" << "Type: " << animal->getType() << std::endl;
	std::cout << "Sound: ";
	animal->makeSound();
	std::cout << "----------\n\n";
	std::cout << "----------\n";
	std::cout << "Class: Cat\n" << "Type: " << cat->getType() << std::endl;
	std::cout << "Sound: ";
	cat->makeSound();
	std::cout << "----------\n\n";
	std::cout << "----------\n";
	std::cout << "Class: Dog\n" << "Type: " << dog->getType() << std::endl;
	std::cout << "Sound: ";
	dog->makeSound();
	std::cout << "----------\n\n";
	std::cout << "\nBase class WrongAnimal + Sub-class WrongCat\n";
	std::cout << "----------\n";
	std::cout << "Class: WrongAnimal\n" << "Type: " << wrong_animal->getType() << std::endl;
	std::cout << "Sound: ";
	animal->makeSound();
	std::cout << "----------\n\n";
	std::cout << "----------\n";
	std::cout << "Class: WrongCat\n" << "Type: " << wrong_cat->getType() << std::endl;
	std::cout << "Sound: ";
	wrong_cat->makeSound();
	std::cout << "----------\n\n";

	delete animal;
	delete cat;
	delete dog;
	delete wrong_animal;
	delete wrong_cat;
	return (0);
}
