#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is leaf or 0 if not.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->left == NULL && node->right == NULL)

	/*  Node is leaf */
	return (1);

	/* Node is not leaf */
	return (0);
}
