
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
