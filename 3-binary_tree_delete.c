#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	 /* Base case: If tree is NULL, return */
	if (!tree)
		return;

	/* Delete the left subtree */
	binary_tree_delete(tree->left);
	/* Delete the right subtree */
	binary_tree_delete(tree->right);
	/* Free the memory allocated for the current node */
	free(tree);
}
