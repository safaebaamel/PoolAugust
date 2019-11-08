
#include <stdio.h>

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_upper(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "Ab";
	printf("%d",ft_str_is_lowercase(str));
	return 0;
}
