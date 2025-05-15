/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:49:01 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/20 19:45:25 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm()
{

}

AForm::AForm(std::string name, int gradeSign, int gradeExec)
{
	this->name = name;
	this->gradeSign = gradeSign;
	this->gradeExec = gradeExec;

	if (this->gradeSign < 1 || this->gradeExec < 1)
		AForm::GradeTooLowException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		AForm::GradeTooHighException();
}

AForm::AForm(AForm const &form)
{
	(*this) = form;
}


AForm::~AForm()
{

}



std::string const &AForm::getName() const
{
	return (this->name);
}

int const &AForm::getGradeSign() const
{
	return (this->gradeSign);
}

int const &AForm::getGradeExec() const
{
	return (this->gradeExec);
}

bool const &AForm::getFirmed() const
{
	return (this->firmed);
}



AForm &AForm::operator=(AForm const &form)
{
	this->name = form.name;
	this->firmed = form.firmed;
	this->gradeSign = form.gradeSign;
	this->gradeExec = form.gradeExec;

	return (*this);
}


std::ostream &operator<<(std::ostream &out, AForm const &form)
{
	out << form.getName() << ", " << form.getGradeSign() << ", " << form.getGradeExec() << ", " << form.getFirmed();
	return (out);
}


void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->gradeSign)
		this->firmed = true;
	else
		AForm::GradeTooLowException();
}







