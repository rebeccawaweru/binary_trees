#include "binary_trees.h"

/**
 * balanced_tree_height - measure height of balanced binary tree
 * @tree: the tree
 * Return: height
 */
size_t balanced_tree_height(const binary_tree_t *tree)
{
	size_t b = 0;
	size_t a = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		b = tree->left ? 1 + balanced_tree_height(tree->left) : 1;
		a = tree->right ? 1 + balanced_tree_height(tree->right) : 1;
		return ((b > a) ? b : a);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int sum = 0, rght = 0, lft = 0;

	if (tree)
	{
		lft = ((int)balanced_tree_height(tree->left));
		rght = ((int)balanced_tree_height(tree->right));
		sum = lft - rght;
	}
	return (sum);
}
