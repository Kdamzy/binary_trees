#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * @parent: A pointer to the node
 * @value: The value to be inserted
 * Return: pointer to the new node
 * otherwise Null If parent is NULL or an error occurs
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
