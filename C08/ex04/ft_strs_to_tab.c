
#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*copy_str(char *str)
{
	char *dest;
	int i;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(char) * i)))
		return 0;
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int i;
	
	i = 0;
	if (!(tab = malloc(sizeof(*tab) * ac)))
		return (NULL);
	while (ac > i)
	{
		tab[i].size = ft_length(av[i]);
		tab[i].str = av[i];
		tab[i].copy = copy_str(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
