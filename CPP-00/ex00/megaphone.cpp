/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:52:56 by lde-mich          #+#    #+#             */
/*   Updated: 2023/09/29 15:55:23 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int     i;
    int     j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while(argv[++i])
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char )std::toupper(argv[i][j]);
    }
    std::cout << std::endl;
    return (0);
}