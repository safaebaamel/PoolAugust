
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb == 0 ||  nb == 1)
		return 0;
	while (nb > i)
	{
		if (nb % i == 0)
		{
			return 0;
		}
		i++;
	}
	if (i == nb)
		return 1;
	return 0;	
}

int	main(void)
{
	printf("%d",ft_is_prime(3));
	return 0;
}
