#include "binary_trees.h"

/**
 * binary_tree_is_leaf - the function verifies if a node is a leaf of a BT.
 * @node: A pointer to the node to check.
 * Return: 0 or 1 depending to the case
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

