/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:39:21 by alama             #+#    #+#             */
/*   Updated: 2025/03/13 16:41:03 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->id = -1;
	this->first_name = "UNDEFINED";
	this->last_name = "UNDEFINED";
	this->nickname = "UNDEFINED";
	this->phone_nb = "UNDEFINED";
	this->secret = "UNDEFINED";
}

void	Contact::AddContact(int i)
{
	this->id = i + 1;
	set_first();
	set_last();
	set_nickname();
	set_phone_nb();
	set_secret();
}

void	Contact::set_first(void)
{
	std::cout << "pls add first name : ";
	ft_getline(this->first_name);
	while (this->first_name.empty())
	{
		std::cout << "pls write at least one char : ";
		ft_getline(this->first_name);
	}
}

void	Contact::set_last(void)
{
	std::cout << "pls add the last name : ";
	ft_getline(this->last_name);
	while (this->last_name.empty())
	{
		std::cout << "pls write at least one char : ";
		ft_getline(this->last_name);
	}
}

void	Contact::set_nickname(void)
{
	std::cout << "pls add the nickname : ";
	ft_getline(this->nickname);
	while (this->nickname.empty())
	{
		std::cout << "pls write at least one char : ";
		ft_getline(this->nickname);
	}
}

void	Contact::set_phone_nb(void)
{
	std::size_t	i;
	std::cout << "pls add the phone number: ";
	ft_getline(this->phone_nb);
	for(i = 0; i < this->phone_nb.length(); i++)
	{
		if (!isdigit(phone_nb[i]))
			break ;
	}
	if (i == 0)
	{
		this->phone_nb = '0';
		return ;
	}
	if (i != this->phone_nb.length() - 1)
		this->phone_nb.erase(i, this->phone_nb.length());
}

void	Contact::set_secret(void)
{
	std::cout << "pls add the darskest secret: ";
	ft_getline(this->secret);
	while (this->secret.empty())
	{
		std::cout << "pls write at least one char : ";
		ft_getline(this->secret);
	}
}

std::string	Contact::tronk_ten(std::string str)
{
	str.erase(10, str.length());
	str[9] = '.';
	return (str);
}

void	Contact::print_str(std::string str)
{
	std::string	tronk;
	int	i;

	i = str.length();
	if (i > 10)
	{
		tronk = tronk_ten(str);
		std::cout << tronk << "|";
	}
	else
		std::cout << std::setw(10 - i) << "" << str << "|";
}

void	Contact::print_header(void)
{
	std:: cout << "     index|"<< "first name" << "|"
	<< " last name" << "| " << " nickname" << std::endl;
}


void	Contact::contact_print(int i)
{
	int		len;
	std::string	tronk;

	if (i == 1)
		print_header();
	std::cout << "         " << this->id << "|";
	print_str(this->first_name);
	print_str(this->last_name);
	len = this->nickname.length();
	if (len > 10)
	{
		tronk = tronk_ten(this->nickname);
		std::cout << tronk << std::endl;
	}
	else
		std::cout << std::setw(10 - len) << ""
		<< this->nickname << std::endl;
}

void	Contact::full_print_data(void)
{
	std::cout << "first name : " << this->first_name << std::endl
	<< "last name : " << this->last_name << std::endl
	<< "nickname : " << this->nickname << std::endl
	<< "phone number : " << this->phone_nb << std::endl
	<< "darkset secret : " << this->secret << std::endl;
}
