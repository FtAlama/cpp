/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 20:24:00 by alama             #+#    #+#             */
/*   Updated: 2025/03/26 21:25:31 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{
	Zombie*	z;

	try
	{
		z = new Zombie[n];
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
		exit (1);
	}
	for (int i = 0; i < n; i++)
		z[i].set_name(name);
	return (z);
}
