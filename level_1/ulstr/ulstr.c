#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char	*str = argv[1];
		int	i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
			write(1, &str[i++], 1);
		}
	}
	write(1, "\n", 1);
}
