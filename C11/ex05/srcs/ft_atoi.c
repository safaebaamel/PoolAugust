#include "do_op.h"

int	ft_atoi(char *str)
{
	int i;
	int r;
	int neg;

	i = 0;
	r = 0;
	neg = 1;
	while (str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1; 
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * neg);
}
