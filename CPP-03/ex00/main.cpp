/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/17 20:31:25 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap a ("Lde-mich");
    ClapTrap b("Aldisti");

    a.attack("Aldisti");
    
    b.attack("Lde-mich");
}