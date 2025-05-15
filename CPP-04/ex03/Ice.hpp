/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:01:13 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 11:19:25 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice: public AMateria
{
    private:

    public:
		AMateria* clone() const;
        virtual void use(ICharacter& target);
		Ice & operator = (Ice const &ice);
	
		Ice();
		Ice(Ice const &ice);
		~Ice();
};
