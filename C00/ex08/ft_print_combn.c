
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_cm(int val, int n)
{
	if (val != n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print(int T[], int n)
{
	int i;
	int j;

	i = 0;
	j = 1;
	// it start from T[0] and it ends at T[n-1]
	// this part makes sure that the first case is always lower than the second one
	while (i < n - 1)
	{
		// T[i] must always be lower than T[i+1]
		if (T[i] >= T[i + 1])
		{
			j = 0;
		}
		i++;
	}
	if (j == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(T[i]);
			i++;
		}
		// the condition always starts with a 0 and ends with (10 - n) 
		ft_print_cm(T[0] - '0', 10 - n);	
	}
}
void	ft_do_print(int Tx[], int k, int n)
{
	if (k == n - 1)
	{
		Tx[k] = '0';
		while (Tx[k] >= '0' && Tx[k] <= '9')
		{
			ft_print(Tx,n);
			Tx[k]++;
		}
	}
	else 
	{
		Tx[k] = '0';
		while (Tx[k] >= '0' && Tx[k] <= '9')
		{
			ft_do_print(Tx, k + 1, n);
			Tx[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	ft_do_print(x, 0, n);
}
		
int	main(void)
{
	ft_print_combn(8);
	return 0;
}	
