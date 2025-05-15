/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:23:58 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 00:47:26 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	tree =
	"                             ___\n\
                       _,-'\"\"   \"\"\"\"`--.\n\
                    ,-'          __,,-- \\\n\
                  ,\'    __,--\"\"\"\"dF      )\n\
                 /   .-\"Hb_,--\"\"dF      /\n\
               ,\'       _Hb ___dF\"-._,-'\n\
             ,'      _,-\"\"\"\"   \"\"--..__\n\
            (     ,-'                  `.\n\
             `._,'     _   _             ;\n\
              ,'     ,' `-'Hb-.___..._,-'\n\
              \\    ,'\"Hb.-\'HH`-.dHF\"\n\
               `--\'   \"Hb  HH  dF\"\n\
                       \"Hb HH dF\n\
                        \"HbHHdF\n\
                         |HHHF\n\
                         |HHH|\n\
                         |HHH|\n\
                         |HHH|\n\
                         |HHH|\n\
                         dHHHb\n\
                       .dFd|bHb.               o\n\
	      o       .dHFdH|HbTHb.          o /\n\
	\\  Y  |  \\__,dHHFdHH|HHhoHHb.__       Y\n\
	##########################################\n";


ShrubberyCreationForm::ShrubberyCreationForm(): AForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): AForm()
{
	(*this) = obj;
}


std::string const &ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	this->target = obj.target;

	return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getFirmed())
		AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		AForm::GradeTooLowException();

	std::ofstream fout((this->target + "_shrubbery").c_str());

	int i = -1;
	while(tree[++i])
		fout<< tree[i];
	fout.close();
}













