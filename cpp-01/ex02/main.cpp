/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:33:47 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 19:30:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Memory address of brain is: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF is: " << &stringREF << std::endl << std::endl;
	std::cout << "Value of brain is: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF is: " << stringREF << std::endl;
	return (0);
}
