
void	ft_rev_int_tab(int *tab, int size)
{
	int rev[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		rev[i] = tab[j];
		j--;
		i++;
	} 
}
