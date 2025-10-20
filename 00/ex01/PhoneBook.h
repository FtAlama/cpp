#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# include <cstdlib>

#define NUMBER 8

class	PhoneBook
{
	private:
		Contact		my_contact[NUMBER];
		void		search(int i);

	public:
		PhoneBook();
		void		routine();
};

#endif
