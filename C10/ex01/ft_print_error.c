#include "ft_cat.h"

int	ft_print_error(char *name_p,char *file)
{
	char *ptr;

	ptr = basename(name_p);
	write(2, ptr, ft_strlen(ptr));
	write(2, ": ", 2);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
	return 0;
}	
