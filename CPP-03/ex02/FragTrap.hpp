/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:13:58 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 11:20:07 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		void highFivesGuys(void);
		void attack(const std::string& target);
		FragTrap operator = (FragTrap  &FragTrap);

		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
};
