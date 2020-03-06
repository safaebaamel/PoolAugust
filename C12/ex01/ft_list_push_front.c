#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*elem;
	
	elem = *begin_list;
	if (!elem)
	{
		elem = ft_create_elem(data);
		return ;
	}
	elem = elem->next;
	elem->next = ft_create_elem(data);
}
