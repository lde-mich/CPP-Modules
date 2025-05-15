/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:13 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/19 12:02:01 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  a("lde-mich", 5);
    Bureaucrat  b("adi-stef", 145);
	Form		c("dcastagn", 50, 100);

	std::cout << c << std::endl;
	b.signForm(c);
	std::cout << c << std::endl;
	a.signForm(c);
	std::cout << c << std::endl;

	return (0);
}






