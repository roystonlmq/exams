#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = -1;

	while (str[++i])
		write(1, &str[i], 1);
}
/*
int	main(void)
{
	ft_putstr("    hellooooo    |");
	ft_putstr("      \0 abcdef|");
	ft_putstr("hi  \0 abc|");
}
*/
