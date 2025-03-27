/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:10:17 by alama             #+#    #+#             */
/*   Updated: 2025/03/27 18:18:57 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("default weapon") {};

Weapon::Weapon(std::string type) : type(type) {};

std::string	Weapon::getType() { return this->type; };

void	Weapon::setType(std::string type) { this->type = type; };
