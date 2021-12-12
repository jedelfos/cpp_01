#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "erreur de parametre\n";
		return 1;
	}
	karen.filter(argv[1]);
}