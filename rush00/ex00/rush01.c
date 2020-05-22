void	ft_putchar(char c);

void	ft_printing(char left, char midd, char right, int size)
{
	ft_putchar(left);
	while (size-- > 2)
		ft_putchar(midd);
	if (size == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	if (a < 1 || b < 1)
		return ;
	ft_printing('/', '*', '\\', a);
	while (b-- > 2)
		ft_printing('*', ' ', '*', a);
	if (b == 1)
		ft_printing('\\', '*', '/', a);
}
