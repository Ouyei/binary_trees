#include "binary_trees.h"

/**
 * binary_trees_ancestor - lowest common ancestor
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	const binary_tree_t *uno = first, *dos = second;

	if (!uno || !second)
		return (NULL);
	if (first == second->parent)
		return (second->parent);
	if (second == first->parent)
		return (first->parent);
	while (uno->parent)
	{
		while (dos->parent)
		{
			if (dos->parent == uno->parent)
				return (dos->parent);
			dos = dos->parent;
		}
		dos = second;
		uno = uno->parent;
	}
	if (first->parent == second->parent)
		return (first->parent);
	else
		return (NULL);
}
