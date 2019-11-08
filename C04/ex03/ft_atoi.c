
#include <stdio.h>

int	atoi(char *str)
{
	int i;
	int r;
	int negative;

	negative = 1;
	i = 0;
	while (str[i] < 33)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{	
			negative *= -1;
		}
       		else negative *= 1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		r = r * 10 + (int)str[i] - '0';
			i++;
	}
	return (r *negative);
}

int	main(void)
{
       	printf("%d", atoi("---+---1234aa"));
	return 0;	
}
