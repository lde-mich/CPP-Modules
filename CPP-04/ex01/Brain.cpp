/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:51:49 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/02 17:48:42 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< GREEN << "Brain constructor called" << RESET <<std::endl;
}

Brain::Brain(Brain const &brain)
{
	std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
	(*this) = brain;
}

Brain::~Brain()
{
    std::cout<< RED << "Brain destructor called" << RESET <<std::endl;
}



Brain &Brain::operator = (Brain const &brain)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return (*this);
}


const std::string *Brain::getIdeas() const
{
    return (this->ideas);
}
