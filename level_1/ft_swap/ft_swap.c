void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}	

#include <stdio.h>

int	main(void)
{
	int t1[1] = {0};
	int t2[1] = {2};

	ft_swap(t1, t2);
	printf("%d %d \n", *t1, *t2);
}	
