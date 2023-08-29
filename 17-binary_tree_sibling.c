#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling of
 * Return: Pointer to the sibling node, or NULL if no sibling or NULL node
 * Description: This function finds the sibling node ofa given node in a binary
 * tree. It checks if the given node's parent has a left child that is not
 * the given node, and returns it if true. Otherwise, it returns the right
 * child of the parent. If there's no sibling or if the given node is NULL,
 * NULL is returned.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		/* If node is NULL or has no parent, return NULL */
		return (NULL);

	/* Check if the node is the left child of its parent */
	if (node->parent->left == node)
		return (node->parent->right);
	/* Otherwise, it's the right child, return left child */
	return (node->parent->left);
}
