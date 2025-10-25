/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:23:26 by alama             #+#    #+#             */
/*   Updated: 2025/03/26 20:46:04 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name)
{
	Zombie*	z;
	try
	{
		z = new Zombie(name);
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caugth: " << ba.what() << std::endl;
		return (NULL);
	}
	return (z);
}
