#include <stdio.h>

void	ft_putnbr(int n)
{
	printf("%d\t", n );
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[] = {12,12,1,0};
	ft_foreach(tab, 3,&ft_putnbr);
	return 0;
}
