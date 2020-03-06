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

void	ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *tmp;
	t_list *k;

	list = *begin_list;
	if (!list)
		return 0;
	k = 0;
	while (list)
	{
		tmp = list->next;
		ft_list_push_front(&k, list);
		list = tmp;
	}
	*begin_list = 0;
}
