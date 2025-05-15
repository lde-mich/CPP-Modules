/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:10:26 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/23 12:36:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const WrongAnimal* ii = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl; //Dog
    std::cout << i->getType() << " " << std::endl; //Cat
    std::cout << ii->getType() << " " << std::endl; //WrongCat
	
    i->makeSound(); 
    j->makeSound();
    
    ii->makeSound();

    delete (j);
    delete (i);
    delete (ii);
	
    return 0;
}


// int main()
// {
//     Animal *animals[10];
    
//     for(int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//             animals[i] = new Cat();
//         else
//             animals[i] = new Dog();
//     }
    
//     for(int i = 0; i < 10; i++)
//         delete(animals[i]);
        
//     return (0);
// }