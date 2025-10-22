/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:22:07 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 16:08:46 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__HUMAN_A_H__
#define __HUMAN_A_H__

#include "Weapon.hpp"

static Weapon		tmp;

class HumanA {

public:
	HumanA();
	HumanA(std::string name);
	HumanA(std::string name, Weapon &w);
	void	attack();

private:
	std::string	name;
	Weapon		&w;
};

#endif
