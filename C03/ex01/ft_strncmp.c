
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s2[i] - s1[i]);
		}
		i++;
	}
	return (s2[i] - s1[i]);
}

int	main(void)
{
	char s1[] = "SAFAE";
	char s2[] = "LIFE";
	unsigned n = 3;
	printf("%d",ft_strncmp(s1,s2,n));
	return 0;
}
