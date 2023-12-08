/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:32:54 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/07 13:24:17 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	checkArgs(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Error: invalid number of arguments" << std::endl;
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
    for (std::size_t i = 0; i < line.length();)
    {
        if (line.substr(i, s1.length()) == s1)
        {
            result += s2;
            i += s1.length();
        }
        else
        {
            result += line[i];
            i++;
        }
    }
    line = result;
}

int	main(int ac, char **av)
{
	if (!checkArgs(ac, av))
		return (1);
	std::string		infile_name = av[1];
	std::string		outfile_name = infile_name + ".replace";
	std::ifstream	infile(infile_name);
	std::ofstream	outfile(outfile_name);
	if (!outfile.is_open()) {
        std::cout << "Error: can't create file." << std::endl;
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
