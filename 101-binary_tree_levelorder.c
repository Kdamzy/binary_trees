#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree
 *
 * Return: height of the tree, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0;
		size_t rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height;
	size_t max_h;

	if (!tree || !func)
		return;

	max_h = binary_tree_height(tree) + 1;

	for (height = 1; height <= max_h; height++)
		travasal(tree, func, height);
}

/**
 * travasal - goes through a binary tree using traverse method
 * @tree: pointer to the node of the root of the tree to traverse
 * @func: pointer to a function to call for each node
 * @height: the height of the tree
 */
void travasal(const binary_tree_t *tree, void (*func)(int), size_t height)
{
	if (height == 1)
		func(tree->n);
	else
	{
		travasal(tree->left, func, height - 1);
		travasal(tree->right, func, height - 1);
	}
}
