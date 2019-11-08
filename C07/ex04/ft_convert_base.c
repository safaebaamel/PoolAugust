
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *nbr, char *base);

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_str(int nbr, char *base, char *str) 
{
	int	lbase;
	lbase = ft_strlen(base);

	if (nbr < 0)
	{
		ft_strcat(str, "-");
		nbr *= -1;
	}

	if (nbr > lbase)
		ft_putnbr_str(nbr/lbase, base, str);
	ft_strncat(str, &base[nbr%lbase], 1);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char *str;
	int n;
	int val;
	int base_to_length;
	int count;

	n = ft_atoi_base(nbr, base_from);
	base_to_length = ft_strlen(base_to);
	val = 1;
	count = 1;
	while (val <= n)
	{
		val = val * base_to_length;
		count++;
	}
	str = malloc(sizeof(char) * count);
	if (str == 0)
		return (0);
	ft_putnbr_str(n, base_to, &(*str));
	return (str);
}


