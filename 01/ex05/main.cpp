#include "Harl.hpp"

static void	ft_getline(std::string &str)
{
	getline(std::cin, str);
	if(std::cin.eof() == true)
	{
		std::cout << std::endl << "You just ctrl + D" << std::endl;
		exit(0);
	}
}

int	main(void)
{
	std::string	user_str;
	Harl	h;

	std::cout << "pls write DEBUG, INFO, WARNING or ERROR" << std::endl
	<< "Harl: ";
	ft_getline(user_str);
	h.complain(user_str);
	return (0);
}
