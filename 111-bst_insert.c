#include "binary_trees.h"
#include <stdbool.h>

/**
 * bst_insert - insert node in search tree
 * @tree: pointer to pointer
 * @value: to be inserted
 * Return: NULL or pointer. New version. Using function 0
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *point = NULL;

	if (!tree)
		return (NULL);
	if (!*tree)
	{
		*tree = (bst_t *)binary_tree_node(NULL, value);
		return (*tree);
	}
	point = *tree;
	while (true)
	{
		if (value == point->n)
			return (NULL);
		if (value < point->n)
		{
			if (point->left)
				point = point->left;
			else
			{
				point->left = (bst_t *)binary_tree_node(point, value);
				return (point->left);
			}
		}
		if (value > point->n)
		{
			if (point->right)
				point = point->right;
			else
			{
				point->right = (bst_t *)binary_tree_node(point, value);
				return (point->right);
			}
		}
	}
}
