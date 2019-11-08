
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return 0;
	if (nb == 1 ||  nb == 0)
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

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		//if prime, we ll print if 
		//if not , we ll print the next number which is prime
		if (ft_is_prime(nb) == 1)
			return (nb);
	nb++;
	}
	return 0;
}

int	main(void)
{
	printf("%d",ft_find_next_prime(4));
	return 0;
}
