#include <iostream>
#include <vector>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage:	./a.out <string>" << std::endl;
		return 1;
	}

	std::string	str(av[1]);

	if (str.length() != 80)
	{
		std::cout << "Invalid string" << std::endl;
		return 1;
	}

	std::vector<std::string>	arr;

	for (int i = 0; i < 80; i += 2)
		arr.push_back(str.substr(i, 2));

	for (int i = 0; i < 5; i++)
	{
		for (int j = 7; j >= 0; j--)
			std::cout << arr[(i * 8) + j];
	}
	return 0;
}