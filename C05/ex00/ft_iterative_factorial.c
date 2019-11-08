
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	i = 0;
	fact = 1;
	if (nb < 0)
		return 0;
	if (nb == 0)
		return 1;
	while (nb > i)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return 0;
}
