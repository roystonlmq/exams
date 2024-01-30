#include <unistd.h>

void	ft_putchar(char c, int n)
{
	if (n <= 0)
		return ;
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

int	alphabet_idx(char c)
{
	int	idx;

	idx = c;
	if (c >= 'A' && c <= 'Z')
		idx = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		idx = c - 'a' + 1;

	return (idx);
}

int	main(int argc, char **argv)
{
	int	count[26];

	if (argc == 2)
	{
		char *str = argv[1];
		int	i = 1;
		while (i < 27)
		{
			count[i] = i;
			i++;
		}
		int	j = 0;
		while (str[j])
		{
			//#include <stdio.h>
			//printf("%d \n", alphabet_idx(str[j]));
			if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] >='Z'))
				ft_putchar(str[j], alphabet_idx(str[j]));				
			else
				ft_putchar(str[j], 1);
			j++;
		}
		
	}
	write(1, "\n", 1);
}
