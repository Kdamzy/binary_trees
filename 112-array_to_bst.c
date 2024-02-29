#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree
 * from an array
 * @array: A pointer to the first element.
 * @size: The number of items in the array.
 * Return: A pointer to the root node
 * or NULL on failre.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *tree = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
