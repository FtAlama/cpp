/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:06 by alama             #+#    #+#             */
/*   Updated: 2025/04/01 16:45:51 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	w("excalibur");

	std::cout << w.getType() << '\n';

	HumanA	a("pop");
	HumanA	aa;
	HumanA	abis("bob", w);

	a.attack();
	aa.attack();
	abis.attack();

	HumanB	b;
	HumanB	bis("coc");

	b.attack();
	bis.attack();

	b.setWeapon(w);
	bis.setWeapon(w);
	b.attack();
	bis.attack();

	std::cout << "\n\n\n";
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return (0);
}
