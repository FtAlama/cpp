/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:06 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 16:09:00 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	w("Famas, kalash, bereta sur la ble-ta, mtn on aimerais savoir");
	//Weapon	w("Famas ");

	std::cout << w.getType() << '\n';

	HumanA	aa;
	HumanA	a("pop");
	HumanA	abis("bob", w);

	a.attack();
	aa.attack();
	abis.attack();

	HumanB	b;
	HumanB	bis("bit");

	b.attack();
	bis.attack();

	b.setWeapon(w);
	bis.setWeapon(w);
	b.attack();
	bis.attack();
}
