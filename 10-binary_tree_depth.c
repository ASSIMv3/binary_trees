#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node for which to measure the depth
 * Return: Depth of the node, or 0 if the node is NULL or the root
 * Description: This function calculates the depth of a node in a binary tree
 * by recursively calculating the depth of its parent and adding 1 for each lvl
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL or if it's the root (no parent), return 0 */
	if (!tree || tree->parent == NULL)
		return (0);

	/* Calculate the depth of the parent node and add 1 */
	return (binary_tree_depth(tree->parent) + 1);
}
