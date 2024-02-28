/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:41:06 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 10:17:39 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkArgs(int ac) {
	if (ac < 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		exit(1);
	} else if (ac < 3) {
		std::cout << "\033[1;31mERROR\033[0m Not enough numbers to sort\n";
		exit(1);
	}
}

int	main(int ac, char **av) {
	PmergeMe			seq;
	std::deque<int>		deq;
	std::vector<int>	vec;

	checkArgs(ac);

	std::clock_t	deqStart = std::clock();
	std::cout << "\033[1;36mDEQUE CONTAINER\033[0m\n";
	seq.fillDeq(av);
	deq = seq.getDeq();
	std::cout << "Before: ";
	print(deq);
	seq.fordJohnsonDeq(deq);
	std::cout << "After: ";
	print(deq);
	std::cout << '\n';
	double	deqTime = ((std::clock() - deqStart) / (double) CLOCKS_PER_SEC) * 1000;

	std::clock_t	vecStart = std::clock();
	std::cout << "\033[1;35mVECTOR CONTAINER\033[0m \n";
	seq.fillVec(av);
	vec = seq.getVec();
	std::cout << "Before: ";
	print(vec);
	seq.fordJohnsonVec(vec);
	std::cout << "After: ";
	print(vec);
	std::cout << '\n';
	double	vecTime = ((std::clock() - vecStart) / (double) CLOCKS_PER_SEC) * 1000;

	std::cout << "Time to process a range of " << ac - 1 << " elements with \033[1;36mstd::deque\033[0m: " << deqTime << " milliseconds\n";
	std::cout << "Time to process a range of " << ac - 1 << " elements with \033[1;35mstd::vector\033[0m: " << vecTime << " milliseconds\n";
	return (0);
}
