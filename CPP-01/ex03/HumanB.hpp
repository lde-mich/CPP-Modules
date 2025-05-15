/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:52:55 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 16:55:56 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		void attack();
		std::string getName();
		void		setName(std::string name);
		void		setWeapon(Weapon &weapon);

		HumanB(std::string name, Weapon *weapon);
		HumanB(std::string name);
		~HumanB();
};