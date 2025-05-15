/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 12:03:18 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout<< "AMateria constructor called" <<std::endl;
}

AMateria::AMateria(std::string const &type)
{
	// std::cout<< "AMateria type constructor called" <<std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	// std::cout<< "AMateria destructor called" <<std::endl;
}



std::string const &AMateria::getType() const
{
    return (this->type);
}



AMateria  &AMateria::operator = (AMateria const &aMateria)
{
	this->type = aMateria.getType();
    return (*this);
}


void	AMateria::use(ICharacter &target)
{
	(void)target;
}

