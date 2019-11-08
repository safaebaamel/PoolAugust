
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + size);
}	

int	main(void)
{
	char str[] = "WHY";
	char dest[] = "IS";
	unsigned int size = 3;
	printf("%d",ft_strlcat(dest,str,size));
	return 0;
}
