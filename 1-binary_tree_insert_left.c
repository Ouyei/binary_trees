#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to parent node of the tree
 * @value: value of node
 * Return: pointer to new node or NULL in fail case
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->left == NULL)
		new->left = NULL;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}