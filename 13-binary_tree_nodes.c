#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * @tree: Pointer to the root node of the tree to count nodes in
 * Return: Number of nodes with at least one child, or 0 if the tree is NULL
 * Description: This function calculates the number of nodes in a binary tree
 * that have at least one child (non-leaf nodes), by recursively counting nodes
 * in the left and right subtrees and adding them together.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If tree is NULL or is a leaf, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively count nodes in the left and right subtrees */
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
