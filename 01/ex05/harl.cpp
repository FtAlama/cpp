#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for" 
		<< "my 7XL-double-cheese-triple-pickle-special-"
		<< "ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn’t put enough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout <<  "think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years, whereas you started working"
	<< "here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string word)
{
	void (Harl::*functptr[])() =  { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (word.compare(str[i]) == 0)
		{
			(this->*functptr[i])();
			return ;
		}
	}
	std::cout << "Seriously? I’ve been a loyal customer forever, "
		<< "and you expect me to pay extra for something that " 
		<< "should already be included? This is ridiculous!" << std::endl;
}
