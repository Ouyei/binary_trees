#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: A pointer 2 the node 2 insert the letf-child in.
 * @value: Value 2 store in the new node.
 * Return: New node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
    new_node->n = value;
	new_node->left = new_node->right = NULL;

	return (new_node);
}