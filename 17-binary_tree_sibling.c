#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: NULL if node pr parent  is NULL or there is no sibling
 * Otherwise, a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
