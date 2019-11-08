
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
       	write(1, &c, sizeof(c));
}

int	ft_base(char *base)
{
	int i; 
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int j;
	int T[100];
	
	i = 0;
	j = 0;
	if (ft_base(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-'); 
		}
		while (base[j])
			j++;
		while (nbr)
		{
			T[i] = nbr % j;
			nbr = nbr / j;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[T[i]]);
	}
}

int	main(void)
{
	ft_putnbr_base(10,"poneyvif");
	return (0);
}
