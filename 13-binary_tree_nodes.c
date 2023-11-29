#include "binary_trees.h"

/**
 * binary_tree_nodes - The funct counts the nodes in a BT.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 * Return: 0 if tree is NULL, the node count otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

