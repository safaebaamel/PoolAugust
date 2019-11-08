#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int n);
char	*ft_strcat(char *dest, char *src);
int	ft_strlen(char *str);
int	ft_atoi_base(char *nbr,char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_putnbr_str(int nbr, char *base, char *str);


int	main(void)
{
	printf("%s",ft_convert_base("100","0123456789","01234567"));
//	printf("%d", ft_atoi_base("64","01234567"));
}
