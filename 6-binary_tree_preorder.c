#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through
 * a binary tree using pre-order traversal.
 * @tree: Pointer 2 the root node of the tree 2 traverse.
 * @func: Pointer 2 a function 2 call for each node.
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
