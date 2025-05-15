/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:13 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 14:01:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Franco", 2);
		ShrubberyCreationForm form1("Shrubbery");
		RobotomyRequestForm form2("Michele");
		PresidentialPardonForm form3("Presidential");

		Intern someRandomIntern;
		AForm* rrf;

		std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
		bureaucrat.signForm(form1);
		bureaucrat.executeForm(form1);

		std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
		bureaucrat.signForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);
		bureaucrat.executeForm(form2);

		std::cout << "\n--------------- Form 3 ( Presidential ) ---------------" << std::endl;
		bureaucrat.signForm(form3);
		bureaucrat.executeForm(form3);

		rrf = someRandomIntern.makeForm("Error request", "Bender");
		rrf->getName();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}






