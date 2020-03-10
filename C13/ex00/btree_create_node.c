#include "ft_btree.h"
#include <stdlib.h>

//Un arbre est un ensemble d'éléments appelés nœuds (node)

t_btree	*btree_create_node(void *item)
{
	t_btree *elem;

	if (!(elem = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	elem->item = item;
	elem->right = NULL;
	elem->left = NULL;
	return (elem);
}
