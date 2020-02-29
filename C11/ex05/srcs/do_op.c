#include "do-op.h"

void	do_op(int a, int b, int i)
{
	int (*operation[5])(int, int);
	
	operation[0] = add;
	operation[1] = sub;
	operation[2] = mul;
	operation[3] = div;
	operation[4] = mod;
	if ((i == 3 || i == 4) && b == 0)
	{
		if (i == 3)
			ft_putstr("Stop : division by zero");
		if (i == 4)
			ft_putstr("Stop : modulo by zero");
		return ;
	}
	ft_putnbr(operation[i](a,b));
}
