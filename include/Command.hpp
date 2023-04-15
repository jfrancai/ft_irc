#ifndef COMMAND_HPP
#define COMMAND_HPP
#include <iostream>
#include "../utils/utils.hpp"
#include "../include/CommandParser.hpp"
#include "../include/TargetParser.hpp"

class Command : public CommandParser, public TargetParser
{
	public:
		Command(void);
		~Command(void);
		Command(Command const &src);
		Command	&operator=(Command const &rhs);
};

#endif
