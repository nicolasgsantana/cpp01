#include <string>
#include <iostream>
#include <memory>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "str    = " << &str << "\n";
	std::cout << "strPtr = " << strPtr << "\n";
	std::cout << "strRef = " << &strRef << "\n";

	std::cout << "str    = " << str << "\n";
	std::cout << "strPtr = " << *strPtr << "\n";
	std::cout << "strRef = " << strRef << std::endl;
	return (0);
}
