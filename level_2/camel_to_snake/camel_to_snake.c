#include <stdlib.h>
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
		int	i = 0;
		while (str[i])
		{	
			if (str[i] >= 'A' && str[i] <= 'Z')
			{	
				str[i] = str[i] - 'A' + 'a';
				write(1, "_", 1);
			}
			write(1, &str[i++], 1);
		}
	}	
	write(1, "\n", 1);
}
