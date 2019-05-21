#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage:	./a.out <string>" << std::endl;
		return 1;
	}

	std::string	str(av[1]);
	std::vector<std::string>	arr;

	for (int i = 0; i < str.length(); i += 4)
		arr.push_back(str.substr(i + 2, 2));

	while (arr.size() % 4 != 0)
		arr.push_back("00");

	std::cout << "Reversed: ";

	for (int i = 0; i < 7; i++)
	{
		for (int j = 3; j >= 0; j--)
			std::cout << arr[(i * 4) + j];
		std::cout << " ";
	}
	std::cout << std::endl << "Decimal: ";

	std::stringstream	buff;
	unsigned int tmp;

	for (int i = 0; i < 7; i++)
	{
		tmp = 0;
		buff.str("");
		buff.clear();
		buff << arr[(i * 4) + 3] << arr[(i * 4) + 2] << arr[(i * 4) + 1] << arr[(i * 4)];
		buff >> std::hex >> tmp;
		std::cout << tmp << " ";
	}
	return 0;
}
