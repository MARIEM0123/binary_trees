#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a BT.
 * @node: A pointer to the node.
 * Return: NULL if node is NULL or there is no sibling,
 *         A pointer to the sibling in the other case
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

