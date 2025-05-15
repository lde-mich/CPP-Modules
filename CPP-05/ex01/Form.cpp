/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:49:01 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/17 20:37:45 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form()
{

}

Form::Form(std::string name, int gradeSign, int gradeExec)
{
	this->name = name;
	this->gradeSign = gradeSign;
	this->gradeExec = gradeExec;

	if (this->gradeSign < 1 || this->gradeExec < 1)
		Form::GradeTooLowException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		Form::GradeTooHighException();
}

Form::Form(Form const &form)
{
	(*this) = form;
}


Form::~Form()
{

}



std::string const &Form::getName() const
{
	return (this->name);
}

int const &Form::getGradeSign() const
{
	return (this->gradeSign);
}

int const &Form::getGradeExec() const
{
	return (this->gradeExec);
}

bool const &Form::getFirmed() const
{
	return (this->firmed);
}



Form &Form::operator=(Form const &form)
{
	this->name = form.name;
	this->firmed = form.firmed;
	this->gradeSign = form.gradeSign;
	this->gradeExec = form.gradeExec;

	return (*this);
}


std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", " << form.getGradeSign() << ", " << form.getGradeExec() << ", " << form.getFirmed();
	return (out);
}


void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->gradeSign)
		this->firmed = true;
	else
		Form::GradeTooLowException();
}







