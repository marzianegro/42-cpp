/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:20 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 15:05:36 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	checkArgs(int ac) {
	if (ac != 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		return (false);
	}
	return (true);
}

int	main(int ac, char **av) {
	RPN	MathExp;

	if (!checkArgs(ac)) {
		return (1);
	}
	MathExp.execRPN(av[1]);
	return (0);
}

/* 
RPN expressions to test the program:
	"2 3 +" outputs 5.
	"2 3 * 4 +" outputs 10.
	"3 4 + 2 *" outputs 14.
	"2 3 4 * +" outputs 14.
	"2 3 + 4 *" outputs 20.
	"5 3 4 + *" outputs 35.
	"6 2 / 3 -" outputs 0.
	"2 3 + 4 5 + *" outputs 45.
	"7 8 + 3 2 + /" outputs 3.
	"1 2 + 3 + 4 +" outputs 10.
	"1 2 3 4 + + +" outputs 10.
	"1 2 + 3 4 + +" outputs 10.
	"2 3 4 * + 5 +" outputs 19.
	"2 3 * 4 5 * +" outputs 26.
	"2 3 4 + * 5 +" outputs 19.
	"2 3 4 5 + + +" outputs 14.
	"9 5 3 - /" outputs 4.
RPN invalid expressions to test error handling:
	"22 7 +" > Operand out of range 0-9
	"2 0 /" > Cannot divide by 0
	"4 a -" > Element is not an operand nor operator
	"1 5 + 8 7" > Incomplete RPN expression
	"1 + 1" > RPN order not respected
	"3 -" > Incomplete RPN expression
RPN expressions from the subject:
	"8 9 * 9 - 9 - 9 - 4 - 1 +" outputs 42
	"7 7 * 7 -" outputs 42
	"1 2 * 2 / 2 * 2 4 - +" outputs 0
	"(1 + 1)" > Element is not an operand nor operator
RPN expressions from the evaluation sheet:
	"8 9 * 9 - 9 - 9 - 4 - 1 +" outputs 42
	"9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -" outputs 42
	"1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /" outputs 15

Website to check result:
	https://rpn.startkoden.com/
*/
