#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 * Description: This function checks if a binary tree is full, meaning that
 * all nodes have either 0 or 2 children. It recursively checks the left
 * and right subtrees to determine if the tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, it is considered full */
	if (tree == NULL)
		return (0);

	/* If L and R children are NULL, it's a leaf and considered full */
	if (!tree->left && !tree->right)
		return (1);

	/* Recursively check left and right subtrees for fullness */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
