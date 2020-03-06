#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;
	t_list *help;

	i = 0;
	if (!(begin_list))
		return (NULL);
	help = begin_list;
	while (help)
	{
		i++;
		help = help->next; 
	}
	return (i);
}
