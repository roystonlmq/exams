#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int	i = 0;
		while (str[i])
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 'a' + 13) % 26 + 'a';
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (str[i] - 'A' + 13) % 26 + 'A';
			i++;
		}
		int	j = 0;
		while (str[j])
			write(1, &str[j++], 1); 
	}
	write(1, "\n", 1);
}
