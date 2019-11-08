
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return NULL;
	if (min >= max)
		return NULL;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main(void)
{	int *res;
	int i; 

	res = ft_range(5, 10);

	for (i = 0; i < 5; i++)
	  printf("%d,", res[i]);
		printf("\n");
}
