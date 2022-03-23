#include "binary_trees.h"

/**
 *binary_tree_rotate_left - Left rotation.
 *@tree: Pointer 2 the tree.
 *Return: Pointer root.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *aux;

	tmp = NULL;
	if (tree == NULL || tree->right == NULL)
		return (NULL);
	if (tree->right->left != NULL)
		tmp = tree->right->left;
	aux = tree->right;
	tree->right->left = tree;
	tree->parent = tree->right;
	tree->right->parent = NULL;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	return (aux);
}
