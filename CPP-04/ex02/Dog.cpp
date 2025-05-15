/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:09:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/03 10:57:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout<< GREEN << "Dog constructor called" << RESET <<std::endl;
    this->brain = new Brain();
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
    delete (this->brain);
}


Dog	&Dog::operator = (Dog const &dog)
{
    this->brain = new Brain(*(dog.brain));
    return (*this);
}


void Dog::makeSound() const
{
    std::cout<< "Bark!" <<std::endl;
}