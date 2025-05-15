/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:05:59 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/26 14:03:51 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
    std::string	s1;
    std::string	s2;
	std::string read;
	size_t 		pos;
	int			i;

    if (argc != 4)
	{
		std::cerr << "Error\nBad arguments" << std::endl;
		return(0);
	}
	s1 = argv[2];
	s2 = argv[3];

	std::cout << argv[1] << ":" << std::endl;

	std::ifstream fin(argv[1]);
	if (!fin)
		std::cout << "Error opening output file" << std::endl;
	std::string filename = (std::string)argv[1] + ".replace";

	std::ofstream fout(filename.c_str());

	pos = 0;
	i = 0;
	while(std::getline(fin, read))
	{
		std::cout << read << std::endl;
		while ((pos = read.find(s1, i)) != std::string::npos)
		{
			fout << read.substr(i, pos - i) << s2;
			i = pos + s1.length();
		}
		fout << read.substr(i);
		i = 0;
	}
	fin.close();
	fout.close();

	std::cout << std::endl
	<< filename << ":" << std::endl;

	std::ifstream fnin(filename.c_str());
	
	if (!fnin)
		std::cout << "Error opening output file" << std::endl;

	while(std::getline(fnin, read))
		std::cout << read << std::endl;
	fnin.close();
	
	return (0);
}
