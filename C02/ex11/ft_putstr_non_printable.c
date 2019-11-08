
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	convert_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[num / 16]);
	ft_putchar(hex[num % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			convert_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char str[] = "coco\ntu va";
	ft_putstr_non_printable(str);
	return 0;	
}
