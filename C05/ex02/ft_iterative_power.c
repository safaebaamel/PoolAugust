
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int cmpt;

	i = 0;
	cmpt = 1;
	if (power < 0)
		 return 0;
	if (power == 0)
		 return 1;
	// until i == power - 1
	while (power > i)
	{
		cmpt = cmpt * nb;
		i++;
	}
	return (cmpt);
}

int	main(void)
{
	printf("%d",ft_iterative_power(2,2));
	return 0;
}
