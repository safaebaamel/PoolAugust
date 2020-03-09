#include "ft_list.h"

int	ft_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

t_list	*ft_func_help(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	if (!begin_list || !begin_list->next)
		return 0;
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *list;
	t_list *tmp;
	int i;
	int j;

	i = 0;
	j = ft_size(begin_list);
	if (!begin_list || !(begin_list->next))
		return ;
	while (begin_list && i < j - 1)
	{
		list = ft_func_help(begin_list, j - i);
		tmp = list->data;
		list->data = begin_list->data;
		begin_list->data = tmp;
		i++;
		begin_list = begin_list->next;
		j--;
	}
}
