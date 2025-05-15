/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:07 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 00:02:39 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:

		std::string name;
		int grade;

	public:

		std::string const &getName() const;
		int const &getGrade() const;

		void increment();
		void decrement();
		void signForm(AForm &form);
		void executeForm(AForm const &form);

		Bureaucrat &operator=(Bureaucrat const &bureaucrat);

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat();
		~Bureaucrat();

		//Exception

		class GradeTooHighException : public std::exception
		{
			public:
				std::string const printError() const throw ()
				{
					return ("Error High Bureaucrate grade");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				std::string const printError() const throw()
				{
					return ("Error Low Bureaucrate grade");
				}
		};

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);






