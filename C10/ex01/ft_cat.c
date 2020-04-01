#include "ft_cat.h"

int	ft_read_stdin(void)
{
	char buff[1];
	int r;
	
	r = 0;
	while ((read(0, buff, 1)) != 0)
		r += write(1, buff, 1);
	return (r);
}

int	main(int ac, char **av)
{
	int	fd;
	char	buff[1];
	int	i;
	int r;
	
	i = 0;
	if (ac < 2)
		ft_read_stdin();
	while (av[i++] && ac > i)
	{
		if ((fd = open(av[i], O_RDONLY)) != -1)
		{
			while ((r = read(fd, buff, 1)) != 0)
				write(1, buff, 1);
			if (r < 0)
				r = ft_print_error(av[0], av[i]);
			else if ((close(fd)) == -1)
				r = ft_print_error(av[0], av[i]);
		}
		else if (fd == -1)
			r = ft_print_error(av[0], av[1]);
	}
	return (r);	
}
