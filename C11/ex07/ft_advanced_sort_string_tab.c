#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	ft_strcmp(char *s1,char *s2)
{
	int i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2)
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}


void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int i;
	int j;
	char *k;

	i = 0;
	while (tab[i] != '\0')
	{
		j = i + 1;
		while (i < j)
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int x;
	int y;

	x = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y] != '\0')
		{
			ft_putchar(tab[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
