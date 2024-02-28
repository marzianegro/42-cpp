/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:41:22 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/28 15:31:41 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &src) {
	*this = src;
}

PmergeMe::~PmergeMe() {
}

PmergeMe&	PmergeMe::operator=(const PmergeMe &src) {
	if (this != &src) {
		this->_intDeq = src._intDeq;
		this->_intVec = src._intVec;
	}
	return (*this);
}

std::deque<int>	PmergeMe::getDeq() {
	return (_intDeq);
}

std::vector<int>	PmergeMe::getVec() {
	return (_intVec);
}

bool	PmergeMe::isUInt(std::string const &str) {
	std::istringstream	iss(str);
	long int	tryUInt;

	iss >> tryUInt;
	if (tryUInt < 0) {
		throw NegativeSequenceException();
	} else if (tryUInt > std::numeric_limits<int>::max()) {
		throw SequenceOutOfBoundException();
	}
	return (iss.eof() && !iss.fail());
}

void	PmergeMe::fillDeq(char **av) {
	try {
		for (int i = 1; av[i]; i++) {
			std::string	str(av[i]);
			if (!isUInt(str)) {
				throw InvalidSequenceException();
			} else {
				_intDeq.push_back(std::atoi(av[i]));
			}
		}
	} catch (std::exception &e) {
		std::cout << "\033[1;31mERROR\033[0m " << e.what();
	}
}

void	PmergeMe::fillVec(char **av) {
	try {
		for (int i = 1; av[i]; i++) {
			std::string	str(av[i]);
			if (!isUInt(str)) {
				throw InvalidSequenceException();
			} else {
				_intVec.push_back(std::atoi(av[i]));
			}
		}
	} catch (std::exception &e) {
		std::cout << "\033[1;31mERROR\033[0m " << e.what();
	}
}

void	PmergeMe::fordJohnsonDeq(std::deque<int> &seq) {
	
	std::deque<int>	largerElems;
	for (size_t i = 0; i + 1 < seq.size(); i += 2) {
		if (seq[i] > seq[i + 1]) {
			std::swap(seq[i], seq[i + 1]);
		}
		largerElems.push_back(seq[i + 1]);
	}
	
	std::sort(largerElems.begin(), largerElems.end());

	for (size_t i = 0; i < seq.size(); i += 2) {
		size_t pos = binarySearch(largerElems, seq[i], 0, largerElems.size() - 1);
		largerElems.insert(largerElems.begin() + pos, seq[i]);
	}
	seq = largerElems;
}

void	PmergeMe::fordJohnsonVec(std::vector<int> &seq) {
	
	std::vector<int>	largerElems;
	for (size_t i = 0; i + 1 < seq.size(); i += 2) {
		if (seq[i] > seq[i + 1]) {
			std::swap(seq[i], seq[i + 1]);
		}
		largerElems.push_back(seq[i + 1]);
	}
	
	std::sort(largerElems.begin(), largerElems.end());

	for (size_t i = 0; i < seq.size(); i += 2) {
		size_t pos = binarySearch(largerElems, seq[i], 0, largerElems.size() - 1);
		largerElems.insert(largerElems.begin() + pos, seq[i]);
	}
	seq = largerElems;
}
