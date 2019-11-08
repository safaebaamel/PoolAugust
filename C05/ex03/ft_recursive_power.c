
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	if (power > 0)
		return (nb * ft_recursive_power(nb , power - 1));
	return 0;
}

int	main(void)
{
	printf("%d",ft_recursive_power(2,2));
	return 0;
}
