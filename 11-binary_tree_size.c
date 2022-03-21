#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: size of tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (!tree)
		return (0);
	x = binary_tree_size(tree->left);
	y = binary_tree_size(tree->right);
	return (x + y + 1);
}
