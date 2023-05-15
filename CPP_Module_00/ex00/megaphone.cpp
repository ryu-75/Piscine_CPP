#include <iostream>
#include <string>

char	*ft_uppercase(char *text)
{
	int	i = 0;

	while (text[i] != '\0')
	{
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] -= 32;
		i++;
	}
	return (text);
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
			std::cout << ft_uppercase(av[i++]);
		std::cout << std::endl;
	}
	return (0);
}
