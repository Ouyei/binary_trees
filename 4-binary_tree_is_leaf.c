#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer 2 the node check.
 *
 * Return: If the node is a leaf -1, otherwise -0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
