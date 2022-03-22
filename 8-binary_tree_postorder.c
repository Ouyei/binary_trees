#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through
 * a binary tree using post-order traversal.
 * @tree: Pointer 2 the root node of the tree 2 traverse.
 * @func: Pointer 2 a function 2 call for each node.
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
