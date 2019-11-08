
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int r;

	i = 1;
	if (nb < 0)
		return 0;
	if (nb == 1)
		return 1;
	while (nb / 2 >= i)
	{
		r = i * i;
		if (r == nb)
			return (i);
	i++;
	}
	return 0;
}

int	main(void)
{
	printf("%d",ft_sqrt(4));
	return 0;
}
