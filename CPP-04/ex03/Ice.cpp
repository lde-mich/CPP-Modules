/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:22 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 12:05:07 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    // std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const &ice): AMateria("ice")
{
    // std::cout << "Ice copy constructor called" << std::endl;
    (*this) = ice;
}

Ice::~Ice()
{
    // std::cout << "Ice destructor called" << std::endl;
}


void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}


Ice &Ice::operator = (Ice const &ice)
{
	this->type = ice.getType();
    return (*this);
}


AMateria* Ice::clone() const
{
    AMateria* ice = new Ice(*this);

    return (ice);
}