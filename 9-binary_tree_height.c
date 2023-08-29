#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree, or 0 if tree is NULL or a leaf
 * Description: This function calculates the height of a binary tree by
 * recursively calculating the height of the left and right subtrees,
 * and returning the maximum of the two heights plus 1 for the current node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right;
	size_t height_left;

	/* If tree is NULL, or if it's a leaf, return 0 */
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Calculate the height of the left and right subtrees */
	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	/* Return the maximum of the left and right subtree heights */
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
