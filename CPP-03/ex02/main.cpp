/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:41 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 09:45:13 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap a ("Lde-mich");
    ClapTrap b("Aldisti");
	ClapTrap c("Dcastagn");

    ScavTrap d("Mpaterno");

    FragTrap e("Gpanico");

    a.attack(b.getName());
    b.attack(a.getName());
	e.attack(d.getName());
    d.takeDamage(e.getAttackDamage());
}