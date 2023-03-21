#include  "include/Server.hpp"
#include <cstring>

typedef std::string string;

const string& parsePort(const string &port)
{
	for (string::const_iterator it = port.begin(); it != port.end(); ++it)
		if (isdigit(*it) == 0)
			throw std::invalid_argument("Invalid Port Number: only positive digits accepted");

	if (std::atoi(port.c_str()) > 65535)
		throw std::invalid_argument("Invalid Port Number : portNumber must be between 1 and 65535");

	return (port);
}

const string&	parseArgs(int ac, char **av)
{
	std::cout << "Step 1: Server is starting : Parsing arguments" << std::endl;
	if (ac != 3)
		throw std::invalid_argument("Invalid Args: How to use: ./ircserv portNumber password.");
	return (parsePort(string(av[1])));
}

int main(int ac, char **av)
{
	string portNumber;
	try
	{
		portNumber = parseArgs(ac, av);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	Server server(portNumber, string(av[2]));
	try
	{
		std::cout << "Step 2: Server is setting up : Awaitting Connection Loop ..." << std::endl;
		server.AwaitingConnectionLoop();
	}
	catch (std::exception &e)
	{
		std::cout << "AwaitingConnectionLoop Error: " << std::endl;
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	/*
	try
	{
		std::cout << "Step 3: Server is setting up : FdMultithreading ..." << std::endl;
		server.FdMultithreading();
	}
	catch (std::exception &e)
	{
		std::cout << "FdMultithreading Error: " << std::endl;
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	*/
	std::cout << "Server is closed. Byeee 👋👋👋" << std::endl;
	return (0);
}
