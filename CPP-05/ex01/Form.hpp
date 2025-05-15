/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:43:30 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/17 20:36:32 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string name;
		bool firmed;
		int gradeSign;
		int gradeExec;

	public:
		std::string const &getName() const;
		int const &getGradeSign() const;
		int const &getGradeExec() const;
		bool const &getFirmed() const;

		Form &operator=(Form const &form);

		void beSigned(Bureaucrat const &bureaucrat);
		
		Form(Form const &form);
		Form(std::string name, int gradeSign, int gradeExec);
		Form();
		~Form();

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

std::ostream &operator<<(std::ostream &out, Form const &form);







