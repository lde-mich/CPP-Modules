/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:07:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/02 17:48:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< GREEN << "Animal constructor called" << RESET <<std::endl;
}


Animal::Animal(std::string type)
{
    std::cout<< GREEN << "Animal type constructor called" << RESET <<std::endl;
    this->type = type;
}

Animal::Animal(Animal const &animal)
{
	std::cout << GREEN << "Animal copy constructor called" << RESET << std::endl;
	(*this) = animal;
}

Animal::~Animal()
{
    std::cout<< RED << "Animal destructor called" << RESET <<std::endl;
}



Animal &Animal::operator = (Animal const &animal)
{
	this->type = animal.getType();
    return (*this);
}



std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}



void Animal::makeSound() const
{
    std::cout << "Animal doesn't sound!" << std::endl;
}













