#ifndef __ZOMBIE__H__
#define __ZOMBIE__H__
#include <iostream>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	set_name(std::string name);

	private:
		std::string _name;

};
Zombie* zombieHorde( int n, std::string name );

#endif