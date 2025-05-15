/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:09:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/02 17:39:23 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout<< GREEN << "Dog constructor called" << RESET <<std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &dog): Animal()
{
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
	(*this) = dog;
}

Dog::~Dog()
{
    std::cout<< RED << "Dog destructor called" << RESET <<std::endl;
}


Dog &Dog::operator = (Dog const &dog)
{
    (void)dog;
    return (*this);
}


void Dog::makeSound() const
{
    std::cout<< "Bark!" <<std::endl;
}