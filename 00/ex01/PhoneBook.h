/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:56:04 by alama             #+#    #+#             */
/*   Updated: 2025/03/05 20:18:33 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# include <cstdlib>

class	PhoneBook
{
	private:
		Contact		my_contact[8];
		void		search(int i);

	public:
		PhoneBook();
		void		routine();
};

#endif
