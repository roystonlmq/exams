#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		char	*str = argv[1];
		char	f = argv[2][0];
		char	c = argv[3][0];
		int		i = 0;
		while (str[i])
		{
			if (str[i] == f)
				str[i] = c;
			write(1, &str[i++], 1);
		}
	}
	write(1, "\n", 1);
}
