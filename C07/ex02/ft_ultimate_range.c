
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = 0;
		return 0;
	}
	if (range == 0)
		return 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

int	main(void)
{
	int *tab;
	int i = ft_ultimate_range(&tab,10,30);
	printf("%d",i);
}
