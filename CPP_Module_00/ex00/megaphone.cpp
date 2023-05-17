#include <iostream>
#include <string>
#include <cstring>

int	main(int ac, char **av)
{
	int	i = 1;
	std::string	tmp;

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			int	j = 0;
			while (av[i][j] != 0)
			{
				tmp = toupper(av[i][j++]);
				std::cout << tmp;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
