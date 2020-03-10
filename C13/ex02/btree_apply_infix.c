#include "ft_btree.h"
/* En abrégé GRD (Gauche, Racine, Droit)
Consiste à effectuer dans l'ordre :
Le parcours infixe du sous arbre gauche A1 ;
Le traitement de la racine r ;
Le parcours infixe du sous arbre droit A2.
 * */
void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
