
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i++ < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (-1);
		else if (f(tab[i], tab[i + 1] > 0)
				return (1);
	}
	return 0;
}
