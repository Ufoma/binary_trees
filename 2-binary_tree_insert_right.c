#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If an error occurs or if parent is NULL - NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	/* Initialize the left and right pointers of the new node */
	new_node->left = NULL;
	new_node->right = NULL;

	/* If the parent already has a right child */
	if (parent->right != NULL)
	{
	new_node->right = parent->right;
	parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
