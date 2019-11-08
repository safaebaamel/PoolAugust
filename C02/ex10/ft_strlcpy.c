

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i + size);
}

int	main()
{
	char dest[] = "A";
	char str[] = "B";
	printf("%d", ft_strlcpy(dest,str,3));
	return 0;
}
