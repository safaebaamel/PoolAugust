
#include <unistd.h>
#include <stdio.h>

*ccchar	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char src[] = "safae";
	char dest[] = "pa";
	printf("%s",ft_strcpy(dest,src));
	return 0;
}
