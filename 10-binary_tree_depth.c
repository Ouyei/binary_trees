#include "binary_trees.h"

/**
 * binary_tree_depth -  Measures the depth of a node in a binary tree.
 * @tree: Pointer 2 the root node of the tree 2 traverse.
 *
 * Return: size_int -> depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
