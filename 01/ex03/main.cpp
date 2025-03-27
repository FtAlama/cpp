/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:31:06 by alama             #+#    #+#             */
/*   Updated: 2025/03/27 20:32:15 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	w("coucou");

	std::cout << w.getType() << '\n';

	HumanA	a;
	HumanA	abis("bob", w);

	a.attack();
	abis.attack();

	HumanB	b;
	HumanB	bis("coucou");

	b.attack();
	bis.attack();
}
