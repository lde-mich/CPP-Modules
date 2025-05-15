/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:53 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/11 16:18:08 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void Announce();
        void setName(std::string name);
        std::string getName();
        Zombie();
        ~Zombie();
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);