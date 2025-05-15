/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:07:57 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/23 12:30:06 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
        virtual void makeSound() const = 0;
        Animal  &operator = (Animal const &animal);

        std::string getType() const;
        void setType(std::string type);


        Animal();
		Animal(Animal const &Animal);
        Animal(std::string type);
        virtual ~Animal();
};

