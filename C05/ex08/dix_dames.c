
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	check(int *tab, int position, int i)
{
	//two queens are on the same diagonal only if (i - j) = |k - l|
	//with (i,j) and (k,l) are positions
	int j;

	//position == T[i]
	j = 0;
	while (j < i)
	{
		//each queen must be on a different row
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

void	recursive(int *tab, int *nb_sol, int i)
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
		if (check(tab,position,i) == 1)
		{
			tab[i] = position;
			recursive(tab,nb_sol,i + 1);
		}
		position++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int i;
	int tab[10];
	int nb_sol;

	nb_sol = 0;
	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	recursive(tab,&nb_sol, 0);
	return (nb_sol);
}

int	main(void)
{
	printf("%d",ft_ten_queens_puzzle());
	return 0;
}
