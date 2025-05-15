/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:52 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/10 14:14:49 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
	this->v_index = 0;
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::add()
{
    std::string temp;

	if (this->v_index % MACRO == 0)
		this->v_index = 0;
	do
	{
		std::cout << "Insert FirstName: " << std::endl;
		std::getline (std::cin, temp);
	} while (temp.size() == 0);
	this->rubrica[this->v_index].setFirstName(temp);
	do
	{
		std::cout << "Insert LastName: " << std::endl;
		std::getline (std::cin, temp);
	} while (temp.size() == 0);
	this->rubrica[this->v_index].setLastName(temp);
	do
	{
		std::cout << "Insert NickName: " << std::endl;
		std::getline (std::cin, temp);
	} while (temp.size() == 0);
	this->rubrica[this->v_index].setNickName(temp);
	do
	{
		std::cout << "Insert PhoneNumber: " << std::endl;
		std::getline (std::cin, temp);
	} while (temp.size() == 0);
	this->rubrica[this->v_index].setPhoneNumber(temp);
	do
	{
		std::cout << "Insert DarkestSecret: " << std::endl;
		std::getline (std::cin, temp);
	} while (temp.size() == 0);
	this->rubrica[this->v_index].setDarkestSecret(temp);
    std::cout << "" << std::endl;
	this->index += (this->index < MACRO);
	this->v_index++; 
}

std::string PhoneBook::editStr(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(10);
		s[9] = '.';
	}
	return (s);
}

void	PhoneBook::searchIndex()
{
	std::string cmd;
	int	i;

	std::cout << "Search index: " << std::endl;
	std::getline (std::cin, cmd);
	std::cout << std::endl;

	i = atoi(cmd.c_str());
	if (cmd.size() != 1 || i > this->v_index || i <= 0)
		std::cout << "Index not valid" << std::endl << std::endl;
	else
		std::cout << "FirstName: "
		<< this->rubrica[i - 1].getFirstName() << std::endl
		<< "LastName: "
		<< this->rubrica[i - 1].getLastName() << std::endl
		<< "NickName: "
		<< this->rubrica[i - 1].getNickName() << std::endl
		<< "PhoneNumber: "
		<< this->rubrica[i - 1].getPhoneNumber() << std::endl
		<< "DarkestSecret: "
		<< this->rubrica[i - 1].getDarkestSecret() << std::endl
		<< "" << std::endl;
}

void    PhoneBook::search()
{
	int	i;
	
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	i = 0;
	while (i < this->index)
	{
		std::cout << "|"
		<< std::setfill(' ') << std::setw(10)
		<< i + 1
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editStr(this->rubrica[i].getFirstName())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editStr(this->rubrica[i].getLastName())
		<< "|"
		<< std::setfill(' ') << std::setw(10)
		<< PhoneBook::editStr(this->rubrica[i].getNickName())
		<< "|"
		<< "" << std::endl;
		i++;
	}
	searchIndex();
}