int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	
	res = 0;
	sign = 1;
	while (*str == ' ' || *str >= '\t' && *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{	
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int	main(void)
{
	#include <stdio.h>
	#include <limits.h>
	printf("%d \n", ft_atoi("-2147483648"));
	printf("%d \n", ft_atoi("2147483647"));
	printf("%d \n", ft_atoi("-42"));
	printf("%d \n", ft_atoi("42"));
}
