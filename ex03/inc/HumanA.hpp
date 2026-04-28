#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	m_name;
		Weapon		&m_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
};
