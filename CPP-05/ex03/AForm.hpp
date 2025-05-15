/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:43:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 00:28:04 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	protected:
		std::string name;
		bool firmed;
		int gradeSign;
		int gradeExec;

	public:
		std::string const &getName() const;
		int const &getGradeSign() const;
		int const &getGradeExec() const;
		bool const &getFirmed() const;

		AForm &operator=(AForm const &form);

		virtual void execute(Bureaucrat const &executor) const = 0;

		void beSigned(Bureaucrat const &bureaucrat);
		
		AForm(AForm const &form);
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm();
		virtual ~AForm();

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

		class FormNotSignedException : public std::exception
		{
			public:
				std::string const printError() const throw()
				{
					return ("Error Form not signed");
				}
		};
};

std::ostream &operator<<(std::ostream &out, AForm const &form);







