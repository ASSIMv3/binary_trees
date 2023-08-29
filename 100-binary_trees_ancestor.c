#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor, or NULL if not found
 * Description: This function finds the lowest common ancestor (LCA) of 2 given
 * nodes in a binary tree. It uses a recursive approach, traversing the tree
 * upwards from the two nodes' parents while checking for equality at each step
 * The recursion continues until a common ancestor is found or one of the nodes
 * reaches the root.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mom, *pop;

	/* Check for NULL nodes */
	if (first == NULL || second == NULL)
		return (NULL);

	/* Check if nodes are the same */
	if (first == second)
		return ((binary_tree_t *)first);

	/* Traverse upwards from the parents of each node */
	mom = first->parent, pop = second->parent;

	/* If the first node's parent is the second node, or vice versa */
	if (first == pop || !mom || (!mom->parent && pop))
		return (binary_trees_ancestor(first, pop));
	else if (mom == second || !pop || (!pop->parent && mom))
		return (binary_trees_ancestor(mom, second));

	/* Continue recursion to find common ancestor */
	return (binary_trees_ancestor(mom, pop));
}
