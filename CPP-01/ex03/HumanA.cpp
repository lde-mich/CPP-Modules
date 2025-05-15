/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:52:35 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 16:26:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) 
{
    std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor called" << std::endl;
}

std::string HumanA::getName()
{
    return (this->name);
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}