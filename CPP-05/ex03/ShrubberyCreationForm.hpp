/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:01 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/20 19:39:11 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;

	public:
		std::string const &getTarget() const;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

		void execute(Bureaucrat const &executor) const;

		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm();
		~ShrubberyCreationForm();

};
