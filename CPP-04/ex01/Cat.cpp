/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/02 18:14:07 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout<< GREEN << "Cat constructor called" << RESET <<std::endl;
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(Cat const &cat): Animal()
{
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
	(*this) = cat;
}

Cat::~Cat()
{
    std::cout<< RED << "Cat destructor called" << RESET <<std::endl;
    delete (this->brain);
}


Cat	&Cat::operator = (Cat const &cat)
{
    this->brain = new Brain(*(cat.brain));
    return (*this);
}


void Cat::makeSound() const
{
    std::cout<< "Meow!" <<std::endl;
}