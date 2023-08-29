#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is the root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the node is NULL */
	if (!node)
		return (0);

	/* Check if the node has no parent, indicating it's the root */
	if (node->parent == NULL)
		return (1);

	return (0);
}