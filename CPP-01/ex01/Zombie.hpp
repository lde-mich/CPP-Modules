/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:47:21 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/12 15:55:44 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce();
        void setName(std::string name);
        std::string getName();
        Zombie();
        ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);