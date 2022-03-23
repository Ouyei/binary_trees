#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_rotate_right - rotate right a tree
 * @tree: pointer to tree
 * Return: pointer to tree or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root, *tmp;
	bool ninozurdo = false;

	if (!tree)
		return (NULL);
	tmp = tree->left;
	if (tmp)
	{
		root = tree->parent;
		if (root)
			ninozurdo = tree->parent->left == tree;
		tree->left = tmp->right;
		if (tmp->right)
			tmp->right->parent = tree;
		tree->parent = tmp;
		tmp->right = tree;
		tmp->parent = root;
		if (root)
		{
			if (ninozurdo)
				root->left = tmp;
			else
				root->right = tmp;
		}
	}
	while (tree->parent)
		tree = tree->parent;
	return (tree);
}
