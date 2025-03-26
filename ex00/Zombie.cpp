/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 16:59:29 by alama             #+#    #+#             */
/*   Updated: 2025/03/26 18:27:43 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "pls give a name to the ZomBie : ";
	getline(std::cin, this->name);
	if (std::cin.eof() == true)
	{
		std::cout << std::endl << "You just ctrl + D" << std::endl;
		exit(0);
	}
}

Zombie::Zombie(std::string name) : name(name)  {} ;

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


std::string	Zombie::get_name(void)
{
	return (this->name);
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": die." << std::endl;
}
