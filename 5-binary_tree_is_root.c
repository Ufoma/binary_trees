#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is root.
 * @node: A pointer to node to check.
 *
 * Return: 1 if the node is root or 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
	
	/* Node is a root */
	return (1);

	/* Node is not a root */
	return (0);
}
