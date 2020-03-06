#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (!(list))
	{
		list = ft_create_elem(data);
		return;
	}
	list = list->next;
	list->next = ft_create_elem(data);
}	

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *list;
	int i;

	i = 0;
	if (size == 0 || !strs)
		return (NULL);
	list = NULL; // the beg of the list;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}
