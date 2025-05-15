/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:53:25 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 16:56:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) 
{
    std::cout << "HumanB Constructor called" << std::endl;
    this->name = name;
    this->weapon = weapon;
}

HumanB::HumanB(std::string name) 
{
    std::cout << "HumanB Constructor called" << std::endl;
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor called" << std::endl;
}

std::string HumanB::getName()
{
    return (this->name);
}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}