#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child
 * @parent: A pointer to the node
 * @value: The value to store in the new node.
 * Return: NULL, if parent is NULL or an error occurs
 * ortherwise a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
