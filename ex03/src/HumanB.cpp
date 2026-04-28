#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->m_name = name;
	m_weapon = NULL;
}
void	HumanB::attack(void)
{
	if (m_weapon)
	{
		std::cout << this->m_name << " attacks with their " << this->m_weapon->getType()
			<< std::endl;
	}
	else
		std::cout << this->m_name << "does not have a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->m_weapon = &weapon;
}
