/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 20:09:21 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 17:33:44 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__HUMAN_B_H__
#define	__HUMAN_B_H__

#include "Weapon.hpp"
#include <iostream>

class	HumanB {

public:
	HumanB();
	HumanB(std::string name);
	HumanB(std::string name, Weapon *w);
	void	setWeapon(Weapon &w);
	void	attack();

private:
	Weapon		*w;
	std::string	name;

};

#endif
