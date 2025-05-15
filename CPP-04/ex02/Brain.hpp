/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:51:52 by lde-mich          #+#    #+#             */
/*   Updated: 2024/04/02 17:51:21 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define RESET "\033[0m"

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain &operator = (Brain const &brain);
		
		const std::string *getIdeas() const;
		
		Brain();
		Brain(Brain const &brain);
		~Brain();
	
};