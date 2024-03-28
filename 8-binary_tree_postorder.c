#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through the binary tree using post-order traversal.
 * @tree: A pointer to the root node of a tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: If tree or func is NULL, do nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
	return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	/* Call the function for the current node */
	func(tree->n);
}
