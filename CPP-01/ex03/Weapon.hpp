/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:49:34 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/16 14:47:08 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		const std::string&	getType();
		void				setType(std::string type);

		Weapon(std::string type);
		~Weapon();
};