/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:26:19 by lde-mich          #+#    #+#             */
/*   Updated: 2023/10/13 10:40:45 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ()
{
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;
	
	std::cout << "S_address -> " << &s << std::endl;
	std::cout << "stringPTR_address -> " << stringPTR << std::endl;
	std::cout << "stringREF_address -> " << &stringREF << std::endl;
	std::cout << std::endl;

	std::cout << "S_value -> " << s << std::endl;
	std::cout << "stringPTR_value -> " << *stringPTR << std::endl;
	std::cout << "stringREF_value -> " << stringREF << std::endl;
	
	return (0);
}