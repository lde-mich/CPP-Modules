/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:47:22 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/12 09:41:10 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie	*first;

	randomChump("Alessandro");
	first = newZombie("Luca");
	first->Announce();
	delete first;
	return (0);
}