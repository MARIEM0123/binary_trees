#include "binary_trees.h"

/**
 * binary_tree_is_root - The function to verify if a node is a root of a BT.
 * @node: A pointer to the node.
 * Return: 0 or 1 depending to the case.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

