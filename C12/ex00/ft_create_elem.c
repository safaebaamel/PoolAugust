#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *element;

	if (!(element = malloc(sizeof(element) + 1)))
		return (NULL);
	element->data = data;
	element->next = NULL;

	return (element);
}
