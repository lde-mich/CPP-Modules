/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:13 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/14 11:29:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat  a("Adi-stef", 1);
		Bureaucrat  b("Lde-mich", 150);

		a.increment();
		//b.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << "Exception called" << std::endl;
	}

	return (0);
}






