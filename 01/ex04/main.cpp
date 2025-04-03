/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:45:20 by alama             #+#    #+#             */
/*   Updated: 2025/04/03 18:29:01 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fd_replace.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "need only 3 arguments" << '\n';
	else
	{
		std::ifstream	*myfile = ft_openFile(argv[1]);
		if (myfile == NULL)
			return (1);
		std::string content = copyfile(myfile);
		content = replaceAll(content, argv[2], argv[3]);
		myfile->close();
		delete myfile;
		replaceFile(content, argv[1]);
	}
	return (0);
}
