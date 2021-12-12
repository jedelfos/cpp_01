#include <iostream>
#include "Zombie.hpp"


int	main()
{
	int		n;
	int		temp;
	Zombie *horde;

	n = 10;
	horde = zombieHorde(n, "Snackie");
	std::cout << "\n\n";
	temp = -1;
	while (++temp < n)
		horde[temp].announce();

	delete [] horde;

	std::cout << "\n";
	n = 10;
	horde = zombieHorde(n, "Snackie");
	std::cout << "\n\n";
	temp = -1;
	while (++temp < n)
		horde[temp].announce();

	delete [] horde;
}
