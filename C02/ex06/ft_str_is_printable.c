
#include <stdio.h>

int	is_printable(char c)
{
	if (c > 32 && c < 126)
		return (1);
	return 0;
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_printable(str[i])))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int	main(void)
{
	char str[] = "PAP";
	printf("%d",ft_str_is_printable(str));
	return 0;
}
