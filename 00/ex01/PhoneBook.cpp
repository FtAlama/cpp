/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:39:11 by alama             #+#    #+#             */
/*   Updated: 2025/03/13 17:18:00 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook(void)
{
	std::cout << "Welcome to : My PhoneBook" << std::endl;
}

void	ft_getline(std::string &str)
{
	getline(std::cin, str);
	if(std::cin.eof() == true)
	{
		std::cout << std::endl << "You just ctrl + D" << std::endl;
		exit(0);
	}
}

void	PhoneBook::search(int i)
{
	int	nb;

	if (i == 0)
	{
		std::cout << "No contact add." << std::endl;
		return ;
	}
	this->my_contact[0].contact_print(1);
	for (int j = 1; j < i; j++)
		this->my_contact[j].contact_print(0);
	std::cout << "Please add an index number for more info : ";
	if(!(std::cin >> nb))
	{
		std::cout << "You need to put only numbers." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (nb < 1 || nb > i)
	{
		std::cout << "index or format not correct" << std::endl;
		if (i == 1)
			std::cout << "you have only 1 contact" << std::endl;
		else
			std::cout << "Only between 1 to " << i << std::endl;
		return ;
	}
	nb--;
	this->my_contact[nb].full_print_data();
}

void	PhoneBook::routine(void)
{
	std::string	usr_input ("");
	int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	do
	{
		std::cout <<  "pls type ADD, SEARCH or EXIT : ";
		ft_getline(usr_input);
		if (usr_input.compare("ADD") == 0)
		{
			if (i >= 8)
			{
				tmp = i;
				i = 0;
			}
			this->my_contact[i].AddContact(i);
			i++;
		}
		if (usr_input.compare("SEARCH") == 0)
		{
			if (tmp > i)
				search(tmp);
			else
				search(i);
		}
	} while (usr_input.compare("EXIT") != 0);
}
