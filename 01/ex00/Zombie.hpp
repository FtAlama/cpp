/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:36:38 by alama             #+#    #+#             */
/*   Updated: 2025/03/26 20:49:41 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ZOMBIE_H__
#define	__ZOMBIE_H__

#include <string>
#include <iostream>
#include <cstdlib>
#include <new>

class	Zombie {

public :
	Zombie();
	Zombie(std::string name);
	void		announce();
	~Zombie();

private :
	std::string	name;
	
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
