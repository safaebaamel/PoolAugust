
#include <stdio.h>

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	if (!(is_alpha(str[i])))
		return 0;
	i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "abc-c";
	printf("%d",ft_str_is_alpha(str));
	return 0;
}
