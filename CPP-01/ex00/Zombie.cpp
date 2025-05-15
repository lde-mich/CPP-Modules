/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:34 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/12 09:42:48 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called" << std::endl;
}

void Zombie::Announce()
{
	std::cout <<getName()<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return (this->name);
}