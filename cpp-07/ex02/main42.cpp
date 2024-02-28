/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main42.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:49:58 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 09:55:21 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main(int, char**)
// {
// 	Array<int>	emptyArr(0);
// 	std::cout << "Size of emptyArr: " << emptyArr.size() << '\n';

//     Array<int>	nbrArr(MAX_VAL);
//     int	*nbrCopy = new int[MAX_VAL];
// 	std::cout << "Size of nbrArr: " << nbrArr.size() << '\n';

//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++) {
//         const int	value = rand();
//         nbrArr[i] = value;
//         nbrCopy[i] = value;
//     }
//     for (int i = 0; i < MAX_VAL; i++) {
//         if (nbrCopy[i] != nbrArr[i]) {
//             std::cout << "nbrCopy failed to save the same value as nbrArr" << '\n';
//             return (1);
//         }
//     }
// 	std::cout << "\n----- Printing all 750 elements of nbrArr -----\n";
// 	std::cout << nbrArr << '\n';
// 	std::cout << "\n----- Printing all 750 elements of nbrCopy -----\n";
// 	std::cout << "[";
// 	for (int i = 0; i < MAX_VAL; i++) {
// 		if (i != MAX_VAL - 1) {
// 			std::cout << nbrCopy[i] << ", ";
// 		} else {
// 			std::cout << nbrCopy[i];
// 		}
// 	}
// 	std::cout << "]\n";
// 	delete [] nbrCopy;

//     try {
// 		std::cout << "\n----- Trying nbrArr[-2] = 0 -----\n";
//         nbrArr[-2] = 0;
//     } catch( const std::exception &e) {
//         std::cout << e.what();
//     }
//     try {
// 		std::cout << "\n----- Trying nbrArr[MAX_VAL] = 0 -----\n";
//         nbrArr[MAX_VAL] = 0;
//     } catch( const std::exception& e) {
//         std::cout << e.what();
//     }
// 	try {
// 		std::cout << "\n----- Trying nbrArr[7] = 0 -----\n";
// 		std::cout << "Before changing nbrArr[7]: " << nbrArr[7] << '\n';
// 		nbrArr[7] = 0;
// 		std::cout << "After changing nbrArr[7]: " << nbrArr[7] << '\n';
// 	} catch (const std::exception &e) {
// 		std::cout << e.what();
// 	}

    
// 	std::cout << "\n----- Printing elements of Array<int> -----\n";
// 	Array<int>	intArr(3);
// 	for (int i = 0; i < 3; i++) {
// 		intArr[i] = i;
// 	}
// 	std::cout << intArr << '\n';

// 	std::cout << "\n----- Printing elements of Array<std::string> -----\n";
// 	Array<std::string>	strArr(3);
// 	for (int i = 0; i < 3; i++) {
// 		strArr[i] = "Hitchhiking";
// 	}
// 	std::cout << strArr << '\n';
// 	return (0);
// }
