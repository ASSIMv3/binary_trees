#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Size of the tree, or 0 if tree is NULL
 * Description: This function calculates the size of a binary tree by
 * recursively calculating the size of the left and right subtrees and
 * adding 1 for the current node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	/* If tree is NULL, return 0 */
	if (!tree)
		return (0);

	/* Calculate the size of the left subtree and add 1 for the current node */
	size = binary_tree_size(tree->left) + 1;

	/* Add the size of the right subtree */
	size += binary_tree_size(tree->right);

	return (size);
}
