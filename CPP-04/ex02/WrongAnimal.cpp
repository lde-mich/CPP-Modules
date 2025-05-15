/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:15 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 15:24:54 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< GREEN << "WrongAnimal constructor called" << RESET <<std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<< GREEN << "WrongAnimal type constructor called" << RESET <<std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
	std::cout << GREEN << "WrongAnimal copy constructor called" << RESET << std::endl;
	(*this) = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< RED << "WrongAnimal destructor called" << RESET <<std::endl;
}



WrongAnimal  &WrongAnimal::operator = (WrongAnimal const &wrongAnimal)
{
	this->type = wrongAnimal.getType();
    return (*this);
}



std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}



void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal doesn't sound!" << std::endl;
}






















