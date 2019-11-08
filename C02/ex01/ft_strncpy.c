
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[] = "AAAAAA";
	char str[] = "oakji";
	printf("%s", ft_strncpy(dest,str,3));
			return 0;
}
