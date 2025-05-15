/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:52:07 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 11:59:21 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon	&weapon;
	public:
		void attack();
		std::string getName();
		void		setName(std::string name);

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};
