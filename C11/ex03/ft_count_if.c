
int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i++ < length)
	{
		while (f(tab[i]) == 1)
			j++;
	}
	return (j);
}
