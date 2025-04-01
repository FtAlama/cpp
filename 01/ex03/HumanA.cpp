/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:21:44 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 16:08:45 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : name("HumanA"), w(tmp) {}

HumanA::HumanA(std::string name) : name(name), w(tmp) {}

HumanA::HumanA(std::string name, Weapon &w) : name(name), w(w) {}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->w.getType() << '\n';
}
