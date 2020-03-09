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

static void	ft_swap(t_list **elm1, t_list **elm2)
{
	void	*tmp;

	tmp = (*elm1)->data;
	(*elm1)->data = (*elm2)->data;
	(*elm2)->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;
	t_list *k;
	t_list *tmp;

	list = *begin_list;
	if (!begin_list || !(*begin_list))
		return ;
	while (list)
	{
		k = list->next;
		if ((*cmp)(list->data, k->data) > 0)
			ft_swap(&list,&k);
		list = list->next;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, (*cmp));
}
