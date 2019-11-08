
#include <stdio.h>

int	ft_base(char c, char *base)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return -1;
		if (base[i] == c)
		       return (i);
		i++;	
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int j;
	int k;
	int length;
	int sign;

	j = 0;
	length = 0;
	sign = 1;
	while (base[length] != '\0')
		++length;
	if (str[0] == '-')
	{
		sign = -1;
		++str;
	}
	while((k = ft_base(*str, base)) >= 0)
	{
		j = j * length + k;
		str++;
	}
	return (j * sign);
}

int	main(void)
{
	char str[] = "144";
	char base[] = "01234567";
	printf("%d",ft_atoi_base(str,base));
	return 0;
}
