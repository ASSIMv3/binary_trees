#include "binary_trees.h"
/**
 * tree_is_perfect - Checks if a subtree is perfect
 * @tree: Pointer to the root node of the subtree to check
 * Return: Depth of the perfect subtree if perfect, otherwise 0
 * Description: This function checks if a subtree is perfect, meaning that
 * all levels of the subtree are fully filled. It recursively checks the
 * left and right subtrees and compares their depths.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		/* Recursively check left and right subtrees */
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		/* Compare depths of left and right subtrees */
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		/* Leaf node is perfect by definition */
		return (1);
	}
	else
		/* One child present, not perfect */
		return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 * Description: This function checks if a binary tree is perfect, meaning that
 * all levels of the tree are fully filled. It calls the tree_is_perfect func
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		/* An empty tree is not perfect */
		return (0);
	}
	else
	{
		/* Call the helper function to check for perfect subtree */
		result = tree_is_perfect(tree);
		/* If subtree is perfect, return 1 */
		if (result != 0)
			return (1);
		/* Otherwise, return 0 */
		return (0);
	}
}
