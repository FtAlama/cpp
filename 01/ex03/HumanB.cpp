/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 20:16:32 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 16:01:07 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : w(NULL), name("HumanB") {}

HumanB::HumanB(std::string name) : w(NULL), name(name) {}

HumanB::HumanB(std::string name, Weapon *w) : w(w), name(name) {}

void	HumanB::attack(void)
{
	if (!this->w)
		std::cout << this->name << " dont have a weapon" << '\n';
	else
	{
		std::cout << this->name << " attacks with their "
		<< this->w->getType() << '\n';
	}
}

void	HumanB::setWeapon(Weapon &w) { this->w = &w; }
