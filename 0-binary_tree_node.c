#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the pointer to the parent node
 * @value: the value
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*allocate memory to the new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
