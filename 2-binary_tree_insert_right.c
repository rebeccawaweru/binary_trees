#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: pointer to the node
 * @value: the value to store in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new;

	if (parent == NULL)
		return (NULL);

	node_new = binary_tree_node(parent, value);
	if (node_new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node_new->right = parent->right;
		parent->right->parent = node_new;
	}
	parent->right = node_new;
	return (node_new);
}
