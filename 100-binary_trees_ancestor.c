#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor
 * of two node
 * @first: Pointer to the first node
 * @second: Pointer to the second node.
 * Return: pointr to the lowest common ancestor of the two given node
 * otherwise, NULL If no common ancestors was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *mum, *dad;

	if (!first || !second)
		return (NULL);

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	mum = first->parent, dad = second->parent;
	if (first == dad || !mum || (!mum->parent && dad))
		return (binary_trees_ancestor(first, dad));
	else if (mum == second || !dad || (!dad->parent && mum))
	{
		return (binary_trees_ancestor(mum, second));
	}
	return (binary_trees_ancestor(mum, dad));
}
