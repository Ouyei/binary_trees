#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child.
 * @parent: A pointer 2 the node 2 insert the right child in.
 * @value: The value 2 store in the new node.
 * Return: New node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
		return (NULL);

	node_right = binary_tree_node(parent, value);
	if (node_right == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = node_right;
		node_right->right = parent->right;
	}
	parent->right = node_right;
	return (node_right);
}
