/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:58:10 by lde-mich          #+#    #+#             */
/*   Updated: 2024/01/22 13:53:09 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		void makeSound() const;
		
		WrongCat();
		WrongCat(WrongCat const &wrongCat);
		~WrongCat();
		
};




















