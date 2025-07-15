#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

enum stringCode {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	DEFAULT
};

class Harl {
public:
	Harl(void);
	~Harl(void);
	void				complain(std::string level);

private:
	void				debug();
	void				info();
	void				warning();
	void				error();
	void				default_msg();
	stringCode	hashString(std::string word);
};

#endif 
