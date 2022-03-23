#include "binary_trees.h"
#include <stdbool.h>

/**
 * bst_insert - insert node in search tree
 * @tree: pointer to pointer
 * @value: to be inserted
 * Return: NULL or pointer
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL, *point = NULL;

	if (!tree)
		return (NULL);
	new = malloc(sizeof(bst_t));
	if (!new)
		return (NULL);
	new->n = value;
	if (!*tree)
	{
		*tree = new;
		return (new);
	}
	point = *tree;
	while (true)
	{
		if (value == point->n)
		{
			free(new);
			return (NULL);
		}
		if (value < point->n)
		{
			if (point->left)
				point = point->left;
			else
			{
				new->parent = point, point->left = new;
				return (new);
			}
		}
		if (value > point->n)
		{
			if (point->right)
				point = point->right;
			else
			{
				new->parent = point, point->right = new;
				return (new);
			}
		}
	}
}
