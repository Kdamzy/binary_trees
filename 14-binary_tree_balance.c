#include "binary_trees.h"

/**
 * binary_tree_height -Measures the height of a binary tree.
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
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: 0 If tree is NULL, otherwise the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lef;
	int rig;

	if (tree == NULL)
		return (0);

	lef = binary_tree_height(tree->left) - 1;
	rig = binary_tree_height(tree->right);
	{
		return (lef > rig ? lef : rig);
	}
	return (0);
}
