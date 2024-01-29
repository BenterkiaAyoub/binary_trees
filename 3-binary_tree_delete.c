#include "binary_trees.h"

/**
 * binary_tree_delete - Delete the binary tree.
 * @tree: pointer for the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
