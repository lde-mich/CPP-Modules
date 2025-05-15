/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:46:20 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/12 16:15:44 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main ()
{
    Zombie *horde;
    
    horde = zombieHorde(5, "luca");
    for (int i = 0; i < 5; i++)
        horde->announce();
    delete[] horde;
	return (0);
}