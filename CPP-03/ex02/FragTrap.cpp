/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:14:07 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 11:19:56 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout<< "FragTrap constructor called" <<std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout<< "FragTrap constructor called" <<std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap destructor called" <<std::endl;
}



void FragTrap::highFivesGuys(void)
{
    std::cout<< this->name << " positive high five request" <<std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!this->energyPoints || !this->hitPoints)
    {
		std::cout<< this->name << " Cannot attack " <<std::endl;   
    }
	else
	{
		this->energyPoints -= 1;
		std::cout<< "FragTrap is attacking" <<std::endl;
        std::cout<< this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" <<std::endl;
	}
}


FragTrap FragTrap::operator = (FragTrap  &FragTrap)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
	this->name = FragTrap.getName();
    this->hitPoints = FragTrap.getHitPoints();
    this->energyPoints = FragTrap.getEnergyPoints();
    this->attackDamage = FragTrap.getAttackDamage();
	
	return (*this);
}















