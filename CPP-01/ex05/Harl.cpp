/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:07:06 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/30 18:32:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor called" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    int n;

    void	(Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = -1;
    n = 0;
    while (level[++i])
        n += (int)level[i];

    switch (n)
    {
    case 519:
        (this->*ptr[0])();
        break;
    case 428:
        (this->*ptr[1])();
        break;
    case 758:
        (this->*ptr[2])();
        break;
    case 554:
        (this->*ptr[3])();
        break;
    default:
        break;
    }

    return ;
}