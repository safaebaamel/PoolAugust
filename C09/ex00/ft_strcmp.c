
int	ft_strcmp(char *s1,char *s2)
{
	int i;

	i = 0;
	while (s2[i])
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
	return (s2[i] - s1[i]);
}
