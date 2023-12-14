/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:15:28 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 00:11:43 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void ft_tests()
{
	// Constructors
	std::cout << std::endl;
	std::cout << "CONSTRUCTORS:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;	// Create Materia
	std::cout << "CREATE MATERIA:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	AMateria	*tmp;
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp = src->createMateria("fire"); // null
	me->equip(tmp);
	std::cout << std::endl;	// Use on a new character
	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	ICharacter* luigi = new Character("luigi");
	me->use(0, *luigi);
	me->use(1, *luigi);
	std::cout << std::endl;
	me->use(2, *luigi); // Use an empty / non existing slot in inventory
	me->use(-4, *luigi);
	std::cout << "-----------------------" << std::endl;
	me->use(18, *luigi);
	std::cout << std::endl;	// Deep copy character
	std::cout << "DEEP COPY CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	Character	*charles = new Character("Charles");
	tmp2 = src->createMateria("cure");
	charles->equip(tmp2);
	tmp3 = src->createMateria("ice");
	charles->equip(tmp3);
	tmp = src->createMateria("earth");
	charles->equip(tmp);
	Character	*charles_copy = new Character(*charles);
	std::cout << std::endl;	// Deep copy vs its source character
	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	charles->unequip(0); // this shows that they have different materia pointers equipped
	// tmp4 = charles_copy->getMateriaFromInventory(1);
	charles_copy->unequip(1); //this will produce a leak if we don't store the address somewhere else before
	tmp = src->createMateria("cure");
	charles_copy->equip(tmp);
	tmp = src->createMateria("ice");
	charles_copy->equip(tmp);
	std::cout << std::endl;	charles->use(0, *luigi);
	charles->use(1, *luigi);
	charles->use(2, *luigi);
	charles->use(3, *luigi);
	std::cout << std::endl;
	charles_copy->use(0, *luigi);
	charles_copy->use(1, *luigi);
	charles_copy->use(2, *luigi);
	charles_copy->use(3, *luigi);
	std::cout << std::endl;	// Unequip tests:
	std::cout << "UNEQUIP:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	me->unequip(-1); // unequip an empty / non existing slot in inventory
	me->unequip(18);
	me->unequip(3);
	std::cout << std::endl;
	me->use(1, *charles);
	me->unequip(1); // Unequip a valid slot in inventory (cure unequipped)
	me->use(1, *charles); // try to use it
	std::cout << std::endl;	// Destructors
	std::cout << "DESTRUCTORS:" << std::endl;
	delete luigi;
	delete me;
	delete src;
	delete charles;
	delete charles_copy;
	delete tmp1;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::endl;
	//system("leaks ex03");
}

int main()
{
	ft_tests();
	// Leaks check
	return (0);
}

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
	
// 	ICharacter* me = new Character("me");
	
// 	AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
	
// 	ICharacter* luigi = new Character("luigi");
	
// 	me->use(0, *luigi);
// 	me->use(1, *luigi);
	
// 	delete luigi; delete me; delete src;
// 	return (0);
// }
