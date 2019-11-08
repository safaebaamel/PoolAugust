
#include <unistd.h>
#include <stdio.h>

void	print(int tab[10][10])
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
			if (tab[i][j])
			{
				c = '0' + j;
				write(1, &c, 1);
			}
	}
	write(1, "\n", 1);
}

int		check(int tab[10][10], int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < x)
		if (tab[i++][y])
			return (0);
	i = x;
	j = y;
	while (j >= 0 && i >= 0)
		if (tab[i--][j--])
			return (0);
	i = x;
	j = y;
	while (i >= 0 && j < 10)
		if (tab[i--][j++])
			return (0);
	return (1);
}

int		backtrack(int tab[10][10], int x, int y, int *nbr)
{
	if (x >= 10)
	{
		print(tab);
		*nbr += 1;
	}
	while (++y < 10)
		if (check(tab, x, y))
		{
			tab[x][y] = 1;
			backtrack(tab, x + 1, -1, nbr);
			tab[x][y] = 0;
		}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int tab[10][10];
	int nbr;
	int b;

	nbr = -1;
	while (++nbr < 10)
	{
		b = -1;
		while (++b < 10)
			tab[nbr][b] = 0;
	}
	nbr = 0;
	backtrack(tab, 0, -1, &nbr);
	return (nbr);
}

int	main(void)
{
	printf("%d",ft_ten_queens_puzzle());
	return 0;
}
