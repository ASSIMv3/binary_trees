#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to be called for each node's value
 * Description: This function applies a given function to the value of each
 * node in the tree while traversing it in preorder.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or the function is NULL */
	if (!tree || !func)
		return;

	/* Apply the function to the current node's value */
	func(tree->n);

	/* Recursively traverse the left and right subtrees in preorder */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
