/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:18:39 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 11:18:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		void guardGate();
		void attack(const std::string& target);
		ScavTrap operator = (ScavTrap  &ScavTrap);

		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
};
