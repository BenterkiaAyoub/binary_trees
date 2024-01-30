#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes at least 1.
 * @tree: pointer to the root node to count the number of nodes.
 *
 * Return: If tree is NULL, return 0, else return count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
