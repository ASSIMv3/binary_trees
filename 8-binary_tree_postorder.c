#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree using postorder traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to be called for each node's value
 * Description: This function traverses a binary tree in postorder, visiting
 * the left subtree, then the right subtree, and finally the current node.
 * For each node, the provided function is called to process its value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or the function is NULL */
	if (!tree || !func)
		return;

	/* Traverse the left subtree in postorder */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree in postorder */
	binary_tree_postorder(tree->right, func);

	/* Apply the function to the current node's value */
	func(tree->n);
}
