/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:02:10 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/30 18:32:22 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
    Harl harl;

    if (argc != 2)
    {
        std::cerr<< "Error:\nBad arguments" << std::endl;
        return (0);
    }

    if ((std::string)argv[1] != "debug" && (std::string)argv[1] != "info"
        && (std::string)argv[1] != "warning" && (std::string)argv[1] != "error")
        {
            std::cerr<< "Error:\nBad value" << std::endl;
            return (0);
        }
    
    harl.complain((std::string)argv[1]);
    return (0);
}