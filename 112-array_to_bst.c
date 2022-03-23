#include "binary_trees.h"

/**
 * array_to_bst - builds binary search
 * @array: array with numbers for tree
 * @size: size of array
 * Return: pointer to root
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *reto = NULL;
	size_t i = 0;

	if (!array)
		return (NULL);
	while (i < size)
	{
		bst_insert(&reto, array[i]);
		i++;
	}
	return (reto);
}
