#include "binary_trees.h"

/**
 * if_perfect - function to say if tree is okay or not
 * @tree: the tree
 * Return: 0 if not perfect
 */
int if_perfect(const binary_tree_t *tree)
{
	int b = 0, a = 0;

	if (tree->left && tree->right)
	{
		b = 1 + if_perfect(tree->left);
		a = 1 + if_perfect(tree->right);
		if (a == b && a != 0 && b != 0)
			return (a);
		return (0);
	} else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final = 0;

	if (tree == NULL)
		return (0);
	final = if_perfect(tree);
	if (final != 0)
		return (1);
	return (0);

}
