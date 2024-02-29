#include "binary_trees.h"

/**
 * valid - Checks if a binary tree is valid
 * @tree: A pointer to the root node
 * @min: The value of the smallest node.
 * @max: The value of the largest node.
 * Return: 1, If the tree is a valid BST
 */
int valid(const binary_tree_t *tree, int min, int max)
{
	if (tree != NULL)
		return(0);
	{
		if (tree->n < min || tree->n > max)
			return (0);
		return (valid(tree->left, min, tree->n - 1) &&
			valid(tree->right, tree->n + 1, max));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid
 * Binary search tree
 * @tree: A pointer to the root node of the tree
 * Return: 1 if tree is valid otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (valid(tree, INT_MIN, INT_MAX));
}
