
int	ft_strcmp(char *s1,char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int j;
	char *k;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (j > i)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0) 
			{
				k = tab[i];
				tab[i] = tab[j];
				tab[j] = k;
			}
			j++;
		}
		i++;
	}
}
