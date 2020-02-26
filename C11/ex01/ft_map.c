#include <stdlib.h>
#include <stdio.h>

int	ft_putnbr(int n)
{
	printf("%d\t", n);
	return 0;
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *res;

	if (!(res = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

int	main(void)
{
	int tab[] = {12,3,4,22,0};
	ft_map(tab, 4, &ft_putnbr);
	return 0;
}
