/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:15:28 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/15 18:32:48 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void	ft_tests(void)
{
	std::cout << std::endl;
	std::cout << "CONSTRUCTORS:" << std::endl;
	std::cout << "----------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* Player1 = new Character("Player1");
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "CREATE MATERIA:" << std::endl;
	std::cout << "----------" << std::endl;
	AMateria	*tmp;
	AMateria	*tmp1;
	AMateria	*tmp2;
	AMateria	*tmp3;
	tmp = src->createMateria("ice");
	Player1->equip(tmp);
	tmp1 = src->createMateria("cure");
	Player1->equip(tmp1); // _inventory[1]
	tmp = src->createMateria("fire"); // invalid materia
	Player1->equip(tmp);
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	std::cout << "----------" << std::endl;
	ICharacter* Player2 = new Character("Player2");
	Player1->use(0, *Player2);
	Player1->use(1, *Player2);
	std::cout << std::endl;
	Player1->use(2, *Player2); // using an empty slot in inventory
	Player1->use(-4, *Player2); // using a non-existant slot in inventory
	Player1->use(18, *Player2); // using a non-existant slot in inventory
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "DEEP COPY CHARACTER:" << std::endl;
	std::cout << "----------" << std::endl;
	Character	*Player3 = new Character("Player3");
	tmp2 = src->createMateria("cure");
	Player3->equip(tmp2);
	tmp3 = src->createMateria("ice");
	Player3->equip(tmp3);
	tmp = src->createMateria("earth");
	Player3->equip(tmp);
	Character	*Player3_copy = new Character(*Player3);
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
	std::cout << "----------" << std::endl;
	Player3->unequip(0); // this shows that they have different materia pointers equipped
	delete tmp2;
	AMateria *floor = Player3_copy->getMateria(1);
	Player3_copy->unequip(1); // this will produce a leak if we don't store the address soPlayer1where else before
	if (floor) {
		delete floor;
	}
	tmp = src->createMateria("cure");
	Player3_copy->equip(tmp);
	tmp = src->createMateria("ice");
	Player3_copy->equip(tmp);
	std::cout << std::endl;
	Player3->use(0, *Player2);
	Player3->use(1, *Player2);
	Player3->use(2, *Player2);
	Player3->use(3, *Player2);
	std::cout << std::endl;
	Player3_copy->use(0, *Player2);
	Player3_copy->use(1, *Player2);
	Player3_copy->use(2, *Player2);
	Player3_copy->use(3, *Player2);
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "UNEQUIP:" << std::endl;
	std::cout << "----------" << std::endl;
	Player1->unequip(-1); // unequipping a non-existant slot in inventory
	Player1->unequip(18); // unequipping a non-existant slot in inventory
	Player1->unequip(3); //  unequipping an empty slot in inventory
	std::cout << std::endl;
	Player1->use(1, *Player3);
	Player1->unequip(1);
	delete tmp1;
	Player1->use(1, *Player3);
	std::cout << "----------" << std::endl;

	std::cout << std::endl;
	std::cout << "DESTRUCTORS:" << std::endl;
	delete Player2;
	delete Player1;
	delete src;
	delete Player3;
	delete Player3_copy;
	std::cout << "----------" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_tests();
	return (0);
}

// Main provided by the subject
// int	main(void)
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* Player1 = new Character("Player1");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	Player1->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	Player1->equip(tmp);

// 	ICharacter* Player2 = new Character("Player2");
// 	Player1->use(0, *Player2);
// 	Player1->use(1, *Player2);

// 	delete Player2;
// 	delete Player1;
// 	delete src;	
// 	return (0);
// }
