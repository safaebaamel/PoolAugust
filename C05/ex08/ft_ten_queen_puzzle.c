#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,sizeof(c));
}

int	backtrack_check(int *tab, int position, int i)
{
	int j;

	j = 0;
	while (i > j)
	{
		if (tab[j] == position)
			return 0;
		if (position - tab[j] == i - j)
			return 0;
		if (tab[j] - position == i - j)
			return 0;
		j++;
	}
	return 1;
}

void	print(int *tab)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	recursive(int *tab,int *nb_sol, int i)
{
	int position;

	if (i == 10)
	{
		print(tab);
		*nb_sol += 1;
	}
	position = 0;
	while (position < 10)
	{
		if (backtrack_check(tab,position,i) == 1)
		{
			tab[i] = position;
			recursive(tab,nb_sol,i+1);
		}
		position++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int tab[10];
	int nb_sol;

	nb_sol = 0;
	recursive(tab,&nb_sol,0);
	return (nb_sol);
}

int	main(void)
{
	printf("%d",ft_ten_queens_puzzle());
}

