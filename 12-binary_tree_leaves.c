#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf = 0, a = 0, b = 0;

	if (tree == NULL)
		return (0);
	b = binary_tree_leaves(tree->left);
	a = binary_tree_leaves(tree->right);
	lf = b + a;
	return ((!b && !a) ? lf + 1 : lf + 0);
}
