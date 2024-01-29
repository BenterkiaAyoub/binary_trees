#include "binary_trees.h"

/**
 * binary_tree_node - Create the  binary tree node.
 * @parent: pointer for  the parent of the node to create.
 * @value: value to put it in the new node.
 *
 * Return: If an error  - NULL.
 *         Otherwise - pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
