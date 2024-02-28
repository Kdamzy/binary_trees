#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree
 * by transverse preorder.
 * @tree: A pointer to the root node
 * @func: A pointer to a function of the node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
