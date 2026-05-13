#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	file;

	if (argc != 4)
	{
		std::cerr << "Usage: ./replace filename old_word new_word\n" << std::endl;
		return (1);
	}
	filename = argv[1];
	file.open(filename.c_str(), std::ios_base::in);
	if (!file)
	{
		std::cerr << "Unable to open " << filename << std::endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	std::cout << "Filename: " <<  filename << "\ns1: " << s1 << "\ns2: " << s2 << std::endl;
	return(0);
}
