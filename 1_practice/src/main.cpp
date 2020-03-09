#include <iostream>
#include <tsv.h>

int main(int argc, char* argv[])
{
	std::string line;
    while (std::getline(std::cin, line, '\n'))
	{
    	std::cout << tsv::getColumn(line, 3) << std::endl;
	}
	return 0;
}
