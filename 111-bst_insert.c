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
			if (!point->left)
			{
				new->parent = point;
				return (point->left = new);
			}
			point = point->left;
		}
		else
		{
			if (!point->right)
			{
				new->parent = point;
				return (point->right = new);
			}
			point = point->right;
		}
	}
	return (0);
}
