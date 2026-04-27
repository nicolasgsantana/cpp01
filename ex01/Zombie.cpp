#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->m_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->m_name << " destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->m_name = name;
}
