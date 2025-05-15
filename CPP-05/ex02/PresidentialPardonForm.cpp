/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:19:45 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 00:24:06 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj): AForm()
{
	(*this) = obj;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}


std::string const &PresidentialPardonForm::getTarget() const
{
	return (this->target);
}


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	this->target = obj.target;

	return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getFirmed())
		AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		AForm::GradeTooLowException();

	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}





