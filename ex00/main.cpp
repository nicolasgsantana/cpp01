#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heapZombie;

	heapZombie = newZombie("Heap");
	heapZombie->announce();
	randomChump("Stack");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
