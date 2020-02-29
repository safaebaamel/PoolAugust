#include "do-op.h"

int	main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 4)
	{
		i = ft_atoi(av[1]);
		j = ft_atoi(av[3]);
		if (!(ft_strcmp(av[2],"+")))
			do_op(i, j, 0);
		else if (!(ft_strcmp(av[2], "-")))
			do_op(i, j, 1);
		else if (!(ft_strcmp(av[2], "*")))
			do_op(i, j, 2);
		else if (!(ft_strcmp(av[2], "/")))
			do_op(i, j, 3);
		else if (!(ft_strcmp(av[2], "%")))
			do_op(i, j, 4);
		else 
			ft_putnbr(0);
		ft_putchar('\n');
	}
	return 0;
}
