#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 *
 * @tree: Pointer to root node of tree to measure balance factor
 *
 * Return: Balance factor of tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* If tree is NULL, it's balanced, return balance factor 0 */
	if (tree == NULL)
		return (0);

	/* Calculate height of left and right subtrees */
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/* Calculate and return balance factor */
	return (left_height - right_height);
}

