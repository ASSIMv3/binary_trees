#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverses a binary tree using inorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to be called for each node's value
 * Description: This function applies a given function to the value of each
 * node in the tree while traversing it in inorder.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or the function is NULL */
	if (!tree || !func)
		return;

	/* Recursively traverse the left subtree in inorder */
	binary_tree_inorder(tree->left, func);

	/* Apply the function to the current node's value */
	func(tree->n);

	/* Recursively traverse the right subtree in inorder */
	binary_tree_inorder(tree->right, func);
}
