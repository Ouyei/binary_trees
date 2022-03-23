#include "binary_trees.h"

/**
 * great - check if is greater than
 * @tree: pointer
 * @value: to be checked
 * Return: 0 or 1
 */

static int great(const binary_tree_t *tree, int value)
{
	int l, r;

	if (!tree)
		return (1);
	if (tree->n > value)
	{
		l = great(tree->left, value);
		r = great(tree->right, value);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * less - check if is greater than
 * @tree: pointer
 * @value: to be checked
 * Return: 0 or 1
 */

static int less(const binary_tree_t *tree, int value)
{
	int l, r;

	if (!tree)
		return (1);
	if (tree->n < value)
	{
		l = less(tree->left, value);
		r = less(tree->right, value);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer
 * Return: 1 if it is, 0 other case
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (less(tree->left, tree->n) && great(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}
	}
	return (0);
}
