/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:12:49 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/19 10:15:48 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    private:
		std::string name;
		int	hitPoints;
		int energyPoints;
		int attackDamage;
		
    public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		int getHitPoints();
		int getEnergyPoints();
		int getAttackDamage();
		
		void setName(std::string name);
		void setHitPoints(int hitPoints);
		void setEnergyPoints(int energyPoints);
		void setAttackDamage(int attackDamage);

		ClapTrap operator = (ClapTrap &clapTrap);

		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
};