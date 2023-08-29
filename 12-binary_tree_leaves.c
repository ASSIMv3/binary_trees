#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves in
 * Return: Number of leaves in the tree, or 0 if the tree is NULL
 * Description: This function calculates the number of leaves in a binary tree
 * by recursively counting the leaves in the left and right subtrees and
 * adding them together.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;

	/* If tree is NULL, return 0 */
	if (!tree)
		return (0);

	/* If the node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count the leaves in the left and right subtrees */
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	/* Return the sum of leaves from both subtrees */
	return (left + right);
}
