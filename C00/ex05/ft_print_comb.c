
#include <unistd.h>

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while (++a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b;
			while (++c <= '9')
			{
				write(1,&a,1);
				write(1,&b,1); 
				write(1,&c,1); 
				if (a != '7')
				{
					write(1,",",1);
					write(1," ",1);
				}
			}
		}
	}	
}
