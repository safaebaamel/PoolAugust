
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				k = tab[i];
				tab[i] = tab[j];
				tab[j] = k;
			}
			j++;
		}
		printf("%d",tab[i]);
		printf("%s", " ");
		i++;
	}
}

int	main(void)
{
	int tab[] = {10,2,5,6,3,1};
	ft_sort_int_tab(tab,6);
	return 0; 
}
