#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie = newZombie("HEAP");
	heapZombie->announce();
	randomChump("Stack");
	delete heapZombie;
	return (0);
}
