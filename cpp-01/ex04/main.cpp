/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:32:54 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/07 16:18:00 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool	checkArgs(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Error: invalid number of arguments!\nPlease specify (in this order) filename, word to be replaced, and replacement word" << std::endl;
		return (false);
	}
	std::ifstream	file(av[1]);
	if (!file.is_open()) {
		std::cout << "Error: " << av[1] << " can't be opened" << std::endl;
		return (false);
	}
	file.close();
	return (true);
}

void	replaceString(std::string& line, const std::string& s1, const std::string& s2)
{
    std::string	result;
    for (std::size_t i = 0; i < line.length();) {
		// is the substring of line starting at current position and of length of s1 euqal to s1?
        if (line.substr(i, s1.length()) == s1) {
            result += s2;
            i += s1.length();
        } else {
            result += line[i];
            i++;
        }
    }
    line = result;
}

int	main(int ac, char **av)
{
	if (!checkArgs(ac, av)) {
		return (1);
	}
	std::string		infile_name = av[1];
	std::string		outfile_name = infile_name + ".replace";
	// c_str() converts std::string to const char*
	std::ifstream	infile(infile_name.c_str());
	std::ofstream	outfile(outfile_name.c_str());
	if (!outfile.is_open()) {
        std::cout << "Error: can't create file" << std::endl;
        return (1);
	}
	std::string	line;
	while (std::getline(infile, line))
	{
		replaceString(line, av[2], av[3]);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}
