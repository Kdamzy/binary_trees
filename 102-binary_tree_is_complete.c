#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to be measure.
 *
 * Return: if tree is NULL return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to be check
 * @num: number of nodes in the tree
 *
 * Return: complete binary tre
 */
int complete(const binary_tree_t *tree, size_t index, size_t num)
{
	if (!tree)
		return (1);

	if (index >= num)
		return (0);

	return (complete(tree->left, 2 * index + 1, num) &&
		complete(tree->right, 2 * index + 2, num));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (complete(tree, 0, size));
}
