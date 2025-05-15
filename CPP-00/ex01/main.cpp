/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:57:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/10 14:24:15 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include<cstdio>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phonebook;
    
    std::cout<<"┏┓┓       ┓     ┓"<< std::endl;
    std::cout<<"┃┃┣┓┏┓┏┓┏┓┣┓┏┓┏┓┃┏"<< std::endl;
    std::cout<<"┣┛┛┗┗┛┛┗┗ ┗┛┗┛┗┛┛┗"<< std::endl;

	std::cout << "" << std::endl;
    while (1)
    {
        std::cout << "Insert command: " << std::endl;
        std::getline (std::cin, cmd);
		std::cout << "" << std::endl;
        std::cin.clear();
        std::clearerr(stdin);
        
        system("clear");
        
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if(cmd == "EXIT")
            return (0);
		else
			 std::cout << "Command not found, use: |ADD| |SEARCH| |EXIT|" << std::endl;
    }
}
