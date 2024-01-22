/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiannit <ggiannit@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:33:47 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/21 20:32:41 by ggiannit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	// Pointer: special type of variable that stores the memory address of another variable
	std::string	*stringPTR = &brain;
	// Reference: alias for another object
	std::string	&stringREF = brain;

	std::cout << "Memory address of brain is: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is: " << &stringREF << std::endl << std::endl;
	std::cout << "Value of brain is: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF is: " << stringREF << std::endl;
	return (0);
}
