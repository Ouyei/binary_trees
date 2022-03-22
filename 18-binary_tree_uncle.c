#include "binary_trees.h"

/**
* binary_tree_sibling - Find the sibling of a node.
* @node: Finds the sibling of a node.
* Return: Pointer to the sibling node.
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == node->parent->right)
return (node->parent->left);
return (node->parent->right);
}

/**
 * binary_tree_uncle - Find the uncle of a node.
 * @node: Pointer 2 the node 2 find the uncle.
 * Return: Pointer to the uncle node
 * NULL -> Return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
