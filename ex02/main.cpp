#include <string>
#include <iostream>
#include <memory>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "===== MEMORY ADDRESS OF THE str =====\n";
	std::cout << "str    = " << &str << "\n";
	std::cout << "=== MEMORY ADDRESS HELD BY strPtr ===\n";
	std::cout << "strPtr = " << strPtr << "\n";
	std::cout << "=== MEMORY ADDRESS HELD BY strRef ===\n";
	std::cout << "strRef = " << &strRef << "\n\n";

	std::cout << "=========== VALUE OF str ===========\n";
	std::cout << "str    = " << str << "\n";
	std::cout << "==== VALUE POINTED TO BY strPtr ====\n";
	std::cout << "strPtr = " << *strPtr << "\n";
	std::cout << "==== VALUE POINTED TO BY strRef ====\n";
	std::cout << "strRef = " << strRef << std::endl;
	return (0);
}
