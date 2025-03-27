/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:50:53 by alama             #+#    #+#             */
/*   Updated: 2025/03/27 18:20:02 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon {

public:
	Weapon();
	Weapon(std::string type);
	std::string	getType();
	void		setType(std::string type);

private:
	std::string	type;

};

#endif
