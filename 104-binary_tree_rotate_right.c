#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Performs a left rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node after rotation
 * Description: This function performs a left rotation on a binary tree. It
 * rotates the tree to the left by moving the right child of the given node
 * to be its parent, and updates the related pointers accordingly.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot;

	/* Check for NULL tree or no right child */
	if (tree == NULL || tree->left == NULL)
		return (NULL);

	/* Perform the left rotation */
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right != NULL)
		pivot->right->parent = tree;
	pivot->right = tree;
	pivot->parent = tree->parent;
	tree->parent = pivot;

	/* Return the new root node after rotation */
	return (pivot);
}
