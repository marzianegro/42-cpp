/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:33:38 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/12 11:03:08 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "Calling complain() with DEBUG\n";
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Calling complain() with INFO\n";
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "Calling complain() with WARNING\n";
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "Calling complain() with ERROR\n";
	harl.complain("ERROR");
	std::cout << std::endl;
	std::cout << "Calling complain() with a different message\n";
	harl.complain("HARL YOU'RE SUCH A KAREN");
	return (0);
}
