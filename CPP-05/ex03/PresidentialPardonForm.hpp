/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:16:45 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/20 23:45:03 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class PresidentialPardonForm: public AForm
{
	private:
		std::string target;

	public:
		std::string const &getTarget() const;

		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

		void execute(Bureaucrat const &executor) const;

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm();
		~PresidentialPardonForm();

};
