
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	long long i;

	i = nb;
	if (i < 0)
	{
		i = i * -1;
		ft_putchar('-');
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	} else ft_putchar(i + '0');
}

int	main()
{
	ft_putnbr(-42);
	return 0;
}
