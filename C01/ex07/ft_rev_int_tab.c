
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int rev[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		rev[i] = tab[j];
		j--;
		i++;
	} 
	i = 0;
	j = 0;
	while (size > i)
	{
		tab[i] = rev[j];
		printf("%d",tab[i]);
		printf("%s", " ");
		i++;
		j++;
	}
}

int	main(void)
{
	int tab[] = {12,1,3,2,11,33};
	ft_rev_int_tab(tab,6);
	return 0;
}
