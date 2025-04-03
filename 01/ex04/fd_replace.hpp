/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_replace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:56:41 by alama             #+#    #+#             */
/*   Updated: 2025/04/03 18:29:03 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FD_REPLACE_H__
# define __FD_REPLACE_H__

#include <string>
#include <iostream>
#include <fstream>

std::ifstream	*ft_openFile(char *str);
std::string	copyfile(std::ifstream	*fd);
std::string	replaceAll(std::string str, std::string s1, std::string s2);
void		replaceFile(std::string str, std::string name);

#endif
