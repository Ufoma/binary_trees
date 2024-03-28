#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree, or 0 if tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

    /* Check if tree is empty */
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/* calculates the left and right sub-treesthen adds 1 */
	return (1 + (left_height > right_height ? left_height : right_height));
}

