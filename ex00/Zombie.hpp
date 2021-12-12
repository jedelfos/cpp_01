#ifndef __ZOMBIE__H__
#define __ZOMBIE__H__
#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie();
	private:
		std::string _name;
};

void	randomChump( std::string name );
Zombie	*newZombie(std::string name );
#endif