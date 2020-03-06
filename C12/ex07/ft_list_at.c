#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *list;
	int i;

	i = 0;
	list = begin_list;
	while (list && i != nbr)
	{
		list = list->next;
		i++;
	}
	if (list && i == nbr)
		return (list);
	return (NULL);
}
