/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:59:59 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 12:04:01 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ICharacter::ICharacter()
// {
//     std::cout << "ICharacter constructor called" << std::endl;
// }



Character::Character()
{
    // std::cout << "Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->item[i] = NULL;
	for(int i = 0; i < 4; i++)
		this->floor[i] = NULL;
}

Character::Character(Character const &character)
{
    // std::cout << "Character copy constructor called" << std::endl;
	(*this) = character;
	for(int i = 0; i < 4; i++)
		this->item[i] = NULL;
	for(int i = 0; i < 4; i++)
		this->floor[i] = NULL;
}

Character::Character(std::string name)
{
	// std::cout << "Character name constructor called" << std::endl;
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->item[i] = NULL;
	for(int i = 0; i < 4; i++)
		this->floor[i] = NULL;
}

Character::~Character()
{
	// std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete(this->item[i]);
	for (int i = 0; i < 4; i++)
		delete(this->floor[i]);
}



std::string const &Character::getName() const
{
	return (this->name);
}

void Character::setName(std::string name)
{
	this->name = name;
}



Character& Character::operator = (Character const &character)
{
	// std::cout << "Copy Character assignment called" << std::endl;
    for (int i = 0; i < 4; i++)
		this->item[i] = character.item[i];
	for (int i = 0; i < 256; i++)
		this->floor[i] = character.floor[i];
	this->setName(character.name);
	return (*this);
}



void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->item[i])
		{
			this->item[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 256; i++)
	{
		if (!this->floor[i])
		{
			this->floor[i] = this->item[idx];
			delete(this->item[idx]);
			break;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && item[idx] != NULL)
	{
		this->item[idx]->use(target);
	}
}