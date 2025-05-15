/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:12:00 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/05 16:18:36 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const
{
    return this->firstName;
}
std::string Contact::getLastName() const
{
    return this->lastName;
}
std::string Contact::getNickName() const
{
    return this->nickName;
}
std::string Contact::getDarkestSecret() const
{
    return this->darkestSecret;
}
std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

void   	Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}
void   	Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}
void   	Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}
void   	Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}
void	Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}