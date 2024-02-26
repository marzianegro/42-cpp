/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:41:30 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/26 17:28:32 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <ctime>
#include <deque>
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>

class	PmergeMe {

public:
	PmergeMe(); // ocf default constructor
	PmergeMe(const PmergeMe &src); // ocf copy constructor
	~PmergeMe(); // ocf destructor

	PmergeMe&	operator=(const PmergeMe &src); // ocf copy assignment operator

	std::deque<int>		getDeq();
	std::vector<int>	getVec();

	bool	isUInt(std::string const &str);
	void	fillDeq(char **av);
	void	fillVec(char **av);

	void	fordJohnsonDeq(std::deque<int> &seq);
	void	fordJohnsonVec(std::vector<int> &seq);

	// exceptions
	class	InvalidSequenceException : public std::exception {
	
	public:
		const char*	what() const throw() {
			return ("Invalid integer sequence\n");
		}
	};
	class	NegativeSequenceException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Negative integer sequence\n");
		}
	};
	class	SequenceOutOfBoundException : public std::exception {
	
	public:
		const char* what() const throw() {
			return ("Integer out of bounds in sequence\n");
		}
	};

private:
	std::deque<int>		_deqInt;
	std::vector<int>	_vecInt;
};

template <typename T>
int	binarySearch(T arr, int elem, int low, int high) {
	int	mid;
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (elem == arr[mid]) {
			return (mid);
		} else if (elem < arr[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	if (elem < arr[mid]) {
		return (mid);
	} else {
		return (mid + 1);
	}
}

template <typename T>
void	print(T &arr) {
	typename T::iterator it;
	for (it = arr.begin(); it != arr.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
