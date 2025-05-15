/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:57:00 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/09 15:38:04 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include "Contact.hpp"

#define MACRO 8

class   PhoneBook
{
    private:
        Contact rubrica[MACRO];
        int     index;
        int     v_index;
        static std::string editStr(std::string s);
        void searchIndex();
    public:
        void add();
        void search();
        PhoneBook();
        ~PhoneBook();
};