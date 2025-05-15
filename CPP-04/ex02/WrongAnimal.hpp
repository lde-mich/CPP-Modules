/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:09:58 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/01 15:24:46 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		virtual void makeSound() const = 0;

		std::string getType() const;
		void setType(std::string type);

		WrongAnimal	&operator = (WrongAnimal const &wrongAnimal);

		WrongAnimal();
		WrongAnimal(WrongAnimal const &wrongAnimal);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
};






















