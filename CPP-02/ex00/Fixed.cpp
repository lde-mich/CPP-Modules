/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:36 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/09 13:43:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<< std::endl;
    this->numberFixed = 0;
}

Fixed::Fixed(Fixed const &o)
{
    *this = o;
    std::cout<<"Copy constructor called"<< std::endl;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<< std::endl;
}

void Fixed::operator = (Fixed const &fixed)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
    this->numberFixed = fixed.getRawBits();
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<< std::endl;
    return this->numberFixed;
}

void Fixed::setRawBits(int const raw)
{
    this->numberFixed = raw;
}