#include "binary_trees.h"

/**
 * binary_tree_insert - inserts a node as the left child
 * @parent: pinter to the node to insert
 * @value: the value stored in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	return (new_node);
}
