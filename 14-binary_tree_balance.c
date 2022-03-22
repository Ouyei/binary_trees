#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer 2 the root node of the tree 2 traverse.
 * Return: int -> height of a binary tree
 * 0 -> if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (tree->left != NULL)
		left_side++;
	if (tree->right != NULL)
		right_side++;

	return (DIFF(left_side, right_side));
}
