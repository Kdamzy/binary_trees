#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using
 * post order transverse.
 * @tree: A pointer to the root node.
 * @func: A pointer to a function to callof each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
