#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node as a left-child
 *                           of another in a binary tree.
 * @parent: pointer for the node to insert the left-child in.
 * @value: value to store it in the new node.
 *
 * Return: If parent is NULL or an error - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent has already a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
