#include "ft_list.h"

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
