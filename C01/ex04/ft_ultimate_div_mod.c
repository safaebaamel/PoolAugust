
void	ft_ultimate_div_mod(int *a, int *b)
{
	int c;

	c = *a / *b;
	*a = c;
	*b = *a % *b;
}
