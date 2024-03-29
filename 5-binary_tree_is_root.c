#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: A pointer to the node to be check.
 *
 * Return: 1 If the node is a root otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
