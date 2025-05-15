/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:45 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 10:09:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<< "ClapTrap constructor called" <<std::endl;
	this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
	std::cout<< "ClapTrap constructor called" <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<< "ClapTrap destructor called" <<std::endl;
}



std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}
int ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}



void ClapTrap::setName(std::string name)
{
	this->name = name;   
}

void ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;	
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;	
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;	
}



void ClapTrap::attack(const std::string& target)
{
    if (!this->energyPoints || !this->hitPoints)
    {
		std::cout<< this->name << " Cannot attack " <<std::endl;   
    }
	else
	{
		this->energyPoints -= 1;
        std::cout<< this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" <<std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout<< this->name << " has taken damage about " << amount << " points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	 if (!this->energyPoints || !this->hitPoints)
    {
		std::cout<< this->name << " Cannot be repaired" <<std::endl;   
    }
	else
	{
		this->energyPoints -= 1;
		this->hitPoints += amount;
		std::cout<< this->name << " has be repaired " << amount << " hit points" <<std::endl;
	}
}



ClapTrap ClapTrap::operator = (ClapTrap  &clapTrap)
{
    std::cout<<"Copy assignment operator called"<< std::endl;
	this->name = clapTrap.getName();
    this->hitPoints = clapTrap.getHitPoints();
    this->energyPoints = clapTrap.getEnergyPoints();
    this->attackDamage = clapTrap.getAttackDamage();
	
	return (*this);
}









