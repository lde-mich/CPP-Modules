/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:18:35 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 11:18:57 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout<< "ScavTrap constructor called" <<std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout<< "ScavTrap constructor called" <<std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<< "ScavTrap destructor called" <<std::endl;    
}

void ScavTrap::guardGate()
{
    std::cout<< this->name << " enters guard mode" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!this->energyPoints || !this->hitPoints)
    {
		std::cout<< this->name << " Cannot attack " <<std::endl;   
    }
	else
	{
		this->energyPoints -= 1;
		std::cout<< "ScavTrap is attacking" <<std::endl;
        std::cout<< this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" <<std::endl;
	}
}


ScavTrap ScavTrap::operator = (ScavTrap  &ScavTrap)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
	this->name = ScavTrap.getName();
    this->hitPoints = ScavTrap.getHitPoints();
    this->energyPoints = ScavTrap.getEnergyPoints();
    this->attackDamage = ScavTrap.getAttackDamage();
	
	return (*this);
}











