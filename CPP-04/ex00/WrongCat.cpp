/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:27 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 14:48:15 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout<< GREEN << "WrongCat constructor called" << RESET <<std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout<< RED <<"WrongCat destructor called" << RESET <<std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat): WrongAnimal()
{
	std::cout << GREEN << "Cat copy constructor called" << RESET << std::endl;
	(*this) = wrongCat;
}



void WrongCat::makeSound() const
{
    std::cout<< "WrongMeow!" <<std::endl;
}






















