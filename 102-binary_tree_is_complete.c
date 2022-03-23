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

/**
 * edos -  exponential base 2.
 * @number: Number.
 *
 * Return: size_int exp
 */
int edos(size_t number)
{
	size_t i = 2, j = 0;

	if (number == 0)
		return (1);
	for (j = 1; j < number; j++)
		i *= 2;
	return (i);
}

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

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to root node
 * Return: 1 if it is or NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *search;
	int t = 0, l = 0, td = 0, ti = 0, ld = 0, li = 0, mt = 0, mi = 0, md = 0;

	if (!tree)
		return (0);
	search = tree;
	while (search)
	{
		t = binary_tree_size(search), l = binary_tree_height(search);
		ti = binary_tree_size(search->left), li = binary_tree_height(search->left);
		td = binary_tree_size(search->right), ld = binary_tree_height(search->right);
		mt = (t == edos(l + 1) - 1), mi = (ti == edos(li + 1) - 1);
		md = (td == edos(ld + 1) - 1);
		if (mt == 1)
			return (1);
		if (mi == 0 && md == 0)
			return (0);
		if (mi == 1 && md == 1)
		{
			if (li - ld != 1)
				return (0);
			else
				return (1);
		}
		if (mi == 1 && md == 0)
		{
			if (ld - li != 0)
				return (0);
			search = search->right;
		}
		if (mi == 0 && md == 1)
		{
			if (li - ld != 1)
				return (0);
			if (search->left->left && !search->left->right)
				return (1);
			search = search->left;
		}
	}
	return (0);
}
