#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor.
 * @tree: pointer to the root node to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height.
 * @tree: A pointer to the root node to measure the height.
 *
 * Return: If tree is NULL,return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
