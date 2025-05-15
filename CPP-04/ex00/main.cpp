/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:10:26 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 13:21:50 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* metameta = new WrongAnimal();
    const WrongAnimal* ii = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl; //Dog
    std::cout << i->getType() << " " << std::endl; //Cat
    std::cout << ii->getType() << " " << std::endl; //WrongCat
	
    i->makeSound(); 
    j->makeSound();
    meta->makeSound();
    
    metameta->makeSound();
    ii->makeSound();

    delete (meta);
    delete (j);
    delete (i);
    delete (metameta);
    delete (ii);
	
    return 0;
}
