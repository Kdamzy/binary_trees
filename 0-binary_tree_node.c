#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary tree.
 * @parent: A pointer to the parent node
 * @value: value to input into the new node
 * Return: pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
