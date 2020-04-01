#include <unistd.h>
#include <fcntl.h>


int	main(int ac, char **av)
{
	int fd;
	char buff[1];

	if (ac < 2)
		write(2,"File name missing.\n",19);
	else if (ac > 2)
		write(2,"Too many arguments.\n",20);
	if (ac != 2)
		return 0;
	if ((fd = open(av[1], O_RDONLY)) > 0)
	{
		while (read(fd, buff, 1) > 0)
			write(1, buff, 1);
	}
	else 
		write(2,"Cannot read file.\n",18);
	return 0;
}
