/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 18:36:38 by alama             #+#    #+#             */
/*   Updated: 2025/03/26 20:59:57 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <cstdlib>
#include <string>

class Zombie {

public:
  Zombie();
  Zombie(std::string name);
  void announce();
  void set_name(std::string name);
  ~Zombie();

private:
  std::string name;
};

Zombie *zombieHorde(int n, std::string name);

#endif
