#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 				of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 * Return: NULL in case of NULL or error.
 *		A pointer to the new node in the other case.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
		return (NULL);

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nw->right = parent->right;
		parent->right->parent = nw;
	}
	parent->right = nw;

	return (nw);
}

