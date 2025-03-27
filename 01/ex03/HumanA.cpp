/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:44 by alama             #+#    #+#             */
/*   Updated: 2025/03/27 20:25:48 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void) : w(tmp), name("HumanA") {}

HumanA::HumanA(std::string name) : w(tmp), name(name) {}

HumanA::HumanA(std::string name, Weapon &w) : w(w), name(name) {}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->w.getType() << '\n';
}
