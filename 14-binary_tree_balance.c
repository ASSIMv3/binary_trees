#include "binary_trees.h"
#define MAX(a, b) ((a) > (b) ? (a) : (b))
/**
 * _binary_tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree to calculate the height of
 * Return: Height of the tree, or 0 if the tree is NULL
 * Description: This function calculates the height of a binary tree by
 * recursively calculating the height of the left and right subtrees,
 * and returning the maximum of the two heights plus 1 for the current node.
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);

	/* Recursively calculate height of left and right subtrees */
	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);

	/* Return the maximum height plus 1 for the current node */
	return (MAX(a, b) + 1);
}

/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree to calculate the height of
 * Return: Height of the tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Call the _binary_tree_height function nd subtract 1 for root node */
	return (_binary_tree_height(tree) - 1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to calculate the balance of
 * Return: Balance factor of the tree, or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);

	/* Calculate the heights of the left and right subtrees */
	a = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	b = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	/* Return the difference in heights */
	return (a - b);
}
