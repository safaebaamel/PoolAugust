
#include <unistd.h>

void	print_num(int nb)
{
	char	a;

	a = (nb / 10) + '0';
	write(1, &a, 1);
	a = (nb % 10) + '0';
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			print_num(a);
			write(1, " ", 1);
			print_num(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
