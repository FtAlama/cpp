/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:32:34 by alama             #+#    #+#             */
/*   Updated: 2025/03/13 15:29:46 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		for(std::size_t j = 0; j < str.length(); j++)
			str[j] = std::toupper(str[j]);
		std::cout << str;
		if (i != argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
