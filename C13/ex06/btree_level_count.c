#include "ft_btree.h"

int	ft_cmp(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	btree_level_count(t_btree *root)
{
	if(root == NULL)
		return 0;
	return (1 + ft_cmp(btree_level_count(root->left),btree_level_count(root->right)));		
}
