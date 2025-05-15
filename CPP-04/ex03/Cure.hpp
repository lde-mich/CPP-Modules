/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:02:02 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 11:57:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
    private:

    public:
		AMateria* clone() const;
        virtual void use(ICharacter& target);
		Cure& operator = (Cure const &cure);
	
		Cure();
		Cure(Cure const &cure);
		~Cure();
};
