
int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i++] != '\0')
	{
		if (f(tab[i]) == 1)
			return 1; 
	}
	return 0;
}
