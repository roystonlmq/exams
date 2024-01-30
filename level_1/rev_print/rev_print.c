#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int	strlen = ft_strlen(str);
		while (str[--strlen])
			write(1, &str[strlen], 1);
	}
	write(1, "\n", 1);
}
