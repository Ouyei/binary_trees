#include "binary_trees.h"

/**
 * bst_search - search for a value
 * @tree: pointer to root
 * @value: value to search
 * Return: NULL if not exist or pointer to node value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *point = NULL;

	if (!tree)
		return (NULL);
	point = (bst_t *)tree;
	while (point)
	{
		if (value == point->n)
			return (point);
		if (value < point->n)
			point = point->left;
		if (value > point->n)
			point = point->right;
	}
	return (NULL);
}
