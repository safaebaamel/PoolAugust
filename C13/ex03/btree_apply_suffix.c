#include "ft_btree.h"

/*En abrégé GDR (Gauche, Droit, Racine)
Consiste à effectuer dans l'ordre :
Le parcours postfixe du sous arbre gauche A1 ; 
Le parcours postfixe du sous arbre droit A2 ;
Le traitement de la racine r.
 *
 */
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_suffix(root->left, applyf);
	if (root->right)
		btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}
