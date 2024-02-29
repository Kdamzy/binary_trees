#include "binary_trees.h"

/**
 *power-raised - returns the value that is raised
 *@a: the value to exponentiate
 *@b: the power 
 *Return: 
 */

int power_raised(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * power_raised(a, b - 1));

}

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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t powers = 0;
	size_t heit = 0;
	size_t node = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	heit = binary_tree_height(tree);
	node = binary_tree_size(tree);

	powers = (size_t)power_raised(2, heit + 1);
	return (powers - 1 == node);
}
