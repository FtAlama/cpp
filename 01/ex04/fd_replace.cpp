/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:58:39 by alama             #+#    #+#             */
/*   Updated: 2025/04/03 18:28:59 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fd_replace.hpp"
#include <cstddef>
#include <iostream>

std::ifstream *ft_openFile(char *str) {
  std::ifstream *myfile = new std::ifstream(str);
  if (myfile->is_open())
    return (myfile);
  std::cerr << "Unable to open file\n";
  delete myfile;
  return (NULL);
}

std::string copyfile(std::ifstream *fd) {
  std::string line;
  std::string tmp;

  while (getline(*fd, tmp)) {
    tmp.append("\n");
    line.append(tmp);
  }
  return (line);
}

std::string replaceAll(std::string str, std::string s1, std::string s2) {
  std::size_t found;

  found = -1;
  if (s1.empty())
    return (str);
  do {
    if (found == (size_t)-1)
      found = str.find(s1, found + 1);
    else
      found = str.find(s1, found + s2.length());
    if (found == std::string::npos)
      break;
    str.erase(found, s1.length());
    str.insert(found, s2);
  } while (found != std::string::npos);
  return (str);
}

void replaceFile(std::string str, std::string name) {
  name.append(".replace");
  std::fstream file;
  file.open(name.c_str(), std::ios::out);
  if (file.is_open())
    file << str;
  else
    std::cerr << "Unable to open replace file\n";
  file.close();
}
