/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:52:55 by lde-mich          #+#    #+#             */
/*   Updated: 2024/03/18 15:18:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <utility>
#include <limits>

class BitcoinExchange
{
	private:

		std::map<std::string, float> database;
		std::multimap<std::string, float> input;

	public:

		void loadFileDatabase(std::string const &filename);
		void loadFileInput(std::string const &filename);
		void calculateBtc();

		BitcoinExchange &operator=(BitcoinExchange const &obj);

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &obj);
		~BitcoinExchange();


		class ErrorFileException: public std::exception
        {
            public:
                virtual const char	*what() const throw()
				{
					return ("Error, unable to open file");
				};
        };

		class UnsuitableFileException: public std::exception
        {
            public:
                virtual const char	*what() const throw()
				{
					return ("Error, unsuitable file");
				};
        };

};





