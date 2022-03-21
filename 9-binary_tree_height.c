#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of the tree
 * @tree: pointer to root node
 * Return: height of the tree
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (!tree)
		return (0);
	x = _binary_tree_height(tree->left);
	y = _binary_tree_height(tree->right);
	if (x > y)
		return (x + 1);
	else
		return (y + 1);
}

/**
 * binary_tree_height - measures the height of the tree
 * @tree: pointer to root node
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ret = 0;

	if (!tree)
		return (0);
	ret = _binary_tree_height(tree) - 1;
	return (ret);
}
