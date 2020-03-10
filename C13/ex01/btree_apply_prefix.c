#include "ft_btree.h"

//En abrégé RGD (Racine, Gauche, Droit) 
//Consiste à effectuer dans l'ordre :
// Le traitement de la racine r ;
//Le parcours préfixe du sous arbre gauche A1 ; 
//Le parcours préfixe du sous arbre droit A2.

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, (*applyf));
	if (root->right)
		btree_apply_prefix(root->right, (*applyf));
}
