#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
