#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 * Return: Pointer to the uncle node, or NULL if no uncle or NULL node
 * Description: This function finds the uncle node of a given node in a binary
 * tree. It checks if the given node's parent, and then its parent, aren't NULL
 * and if the parent of the parent has a left child that is not the parent of
 * the given node. If these conditions are met, the uncle node is returned.
 * Otherwise, NULL is returned.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
			node->parent == NULL ||
			node->parent->parent == NULL)
		/* If node is NULL, has no parent, or parent's parent, return NULL */
		return (NULL);

	/* Check if parent's parent's left child is not the parent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	/* Otherwise, it's the right child, return left child */
	return (node->parent->parent->left);
}
