
#include <stdio.h>

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	return 0;
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_num(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "123";
	printf("%d",ft_str_is_numeric(str));
	return 0;
}
