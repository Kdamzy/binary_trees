#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST
 * to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node,
 * or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp, *new;

	if (tree != NULL)
	{
		tmp = *tree;
		while (tmp != NULL)
		{
			if (value < tmp->n)
			{
				if (tmp->left != NULL)
					tmp = tmp->left;
				else
				{
					new = binary_tree_node(tmp, value);
					if (new == NULL)
						return (NULL);
					tmp->left = new;
					return (new);
				}
			}
			else if (value > tmp->n)
			{
				if (tmp->right != NULL)
					tmp = tmp->right;
				else
				{
					new = binary_tree_node(tmp, value);
					if (new == NULL)
						return (NULL);
					tmp->right = new;
					return (new);
				}
			}
			else
				return (NULL);
		}
		new = binary_tree_node(tmp, value);
		if (new == NULL)
			return (NULL);
		*tree = new;
		return (new);
	}
	return (NULL);
}
