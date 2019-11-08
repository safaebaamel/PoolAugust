
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int cmpt;

	cmpt = 0;
	while (str[cmpt] != '\0')
	{
		ft_putchar(str[cmpt]);
		cmpt++;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 1;
		while (argc > i)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[j], argv[i]) < 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
