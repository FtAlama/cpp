/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:40:27 by alama             #+#    #+#             */
/*   Updated: 2025/03/27 16:59:09 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory adress of the string:	"
	<< &str << std::endl
	<< "The memory address held by stringPTR:	"
	<< &stringPTR << std::endl
	<< "the memory address held by stringREF:	"
	<< &stringREF << std::endl
	<< "The value of the string variable: 	"
	<< str << std::endl
	<< "The value pointed by stringPTR: 	"
	<< *stringPTR << std::endl 
	<< "The value pointed by stringREF: 	"
	<< stringREF << std::endl; 
}
