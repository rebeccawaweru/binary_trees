#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: the tree
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int rght = 0, lft = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		lft = binary_tree_is_full(tree->left);
		rght = binary_tree_is_full(tree->right);
		if (lft == 0 || rght == 0)
			return (0);
		return (1);
	} else if (!tree->left && !tree->right)
	{
		return (1);
	} else
		return (0);
}
