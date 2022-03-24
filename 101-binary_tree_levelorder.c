#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * print_level - Print the nodes by level.
 * @func: Pointer 2 a function.
 * @level: Level.
 * @node: Pointer 2 the node.
 * Return: Nada
 */

void print_level(binary_tree_t *node, void (*func)(int), int level)
{
	if (node != NULL && func != NULL)
	{
		if (level == 1)
			func(node->n);
		if (level > 1)
		{
			print_level(node->left, func, level - 1);
			print_level(node->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - Level-order traversal.
 * @tree: Pointer 2 the tree.
 * @func: Pointer 2 a function.
 * Return: Nada
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0;
	size_t counter;
	binary_tree_t *copy_tree = (binary_tree_t *)tree;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (counter = 0; counter <= height + 1; counter++)
		print_level(copy_tree, func, counter);
}
