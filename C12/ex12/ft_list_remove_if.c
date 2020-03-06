#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *list;

	list = *begin_list;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			list = list->next;
			(*free_fct)(list->data);
			free(list);
		}
		list = list->next;
	}
}
