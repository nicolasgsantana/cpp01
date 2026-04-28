#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	m_name;
		Weapon		*m_weapon;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon weapon);
		void	attack(void);
};
