#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a binary tree
 *
 * @tree: Pointer to the tree to measure the height of
 *
 * Return: The height of the tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree != NULL)
	{
		left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	}

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the tree to measure the balance factor of
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0, balance_factor = 0;

	if (tree != NULL)
	{
		left_height = (int)binary_tree_height_b(tree->left);
		right_height = (int)binary_tree_height_b(tree->right);
		balance_factor = left_height - right_height;
	}

	return (balance_factor);
}

