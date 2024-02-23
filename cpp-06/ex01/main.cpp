/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:01:27 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/23 11:00:50 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int	main(void) {
	Data		dataTest;
	Data		*dataPtr;
	uintptr_t	intPtr;

	dataTest.aTest = "forty-two";
	dataTest.bTest = 42;
	std::cout << "dataTest values are aTest, " << dataTest.aTest << ", and bTest, " << dataTest.bTest << "\n\n";

	std::cout << "--------------------\n";
	std::cout << "Serializing &dataTest in intPtr...\n";
	intPtr = Serializer::serialize(&dataTest);
	std::cout << "intPtr is " << intPtr << "\n\n";

	std::cout << "dataPtr is getting info from Deserialization of intPtr...\n";
	dataPtr = Serializer::deserialize(intPtr);
	std::cout << "dataPtr is: " << dataPtr << '\n';
	std::cout << "--------------------\n\n";

	std::cout << "Final result is:\n";
	std::cout << "dataTest values are aTest, " << dataTest.aTest << ", and bTest, " << dataTest.bTest << "\n";
	std::cout << "dataPtr values are aTest, " << dataPtr->aTest << ", and bTest, " << dataPtr->bTest << '\n';
	return (0);
}
