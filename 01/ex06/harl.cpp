#include "harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for" 
		<< "my 7XL-double-cheese-triple-pickle-special-"
		<< "ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money."
	<< "You didn’t put enough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[WARNING]\n";
	std::cout <<  "think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years, whereas you started working"
	<< "here just last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n"
	<< std::endl;
}

void	Harl::default_msg()
{
	std::cout << "Seriously? I’ve been a loyal customer forever, "
		<< "and you expect me to pay extra for something that " 
		<< "should already be included? This is ridiculous!" << std::endl;
}

stringCode	Harl::hashString(std::string word)
{
	if (word.compare("DEBUG") == 0)
		return (DEBUG);
	else if (word.compare("INFO") == 0)
		return (INFO);
	else if (word.compare("WARNING") == 0)
		return (WARNING);
	else if (word.compare("ERROR") == 0)
		return (ERROR);
	return (DEFAULT);
}

void	Harl::complain(std::string word)
{
	switch (hashString(word)) {	
		case 0:
			this->debug();	// fall through
		case 1:
			this->info();	// fall through
		case 2:
			this->warning();	// fall through
		case 3:
			this->error();
			break;
		default:
			this->default_msg();
	}
}
