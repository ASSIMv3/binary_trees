#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right child node in a binary tree
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Check if parent is NULL */
	if (!parent)
		return (NULL);

	/* Create a new node with the given value */
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	/* Attach the new node as the right child of the parent */
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
