#include "do-op.h"

int	main(int ac, char **av)
{
	if (ac != 4)
		return 0;
	do_op(av[1], av[2], av[3]);
	write(1,"\n",1);
	return 0;
}
