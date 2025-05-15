/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:01:22 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 00:26:17 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): AForm()
{
	(*this) = obj;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}


std::string const &RobotomyRequestForm::getTarget() const
{
	return (this->target);
}


RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	this->target = obj.target;

	return (*this);
}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getFirmed())
		AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		AForm::GradeTooLowException();

	if (rand() %100 > 50)
		std::cout<< this->target << " has been robotomized" << std::endl;
	else
		std::cout << this->target << " robotomy failed" << std::endl;
}








