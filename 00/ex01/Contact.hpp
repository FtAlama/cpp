/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alama <alama@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:50:53 by alama             #+#    #+#             */
/*   Updated: 2025/03/13 16:37:56 by alama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <limits>
# include <iomanip>

void	ft_getline(std::string &str);

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nb;
		std::string	secret;
		int		id;
		std::string	tronk_ten(std::string str);
		void		print_str(std::string str);

	public:
		Contact();
		void		AddContact(int i);
		std::string	get_first();
		std::string	get_last();
		std::string	get_nickname();
		int		get_phone_nb();
		std::string	get_secret();
		void		set_first();
		void		set_last();
		void		set_nickname();
		void		set_phone_nb();
		void		set_secret();
		void		print_header();
		void		contact_print(int i);
		void		full_print_data();
};

#endif
