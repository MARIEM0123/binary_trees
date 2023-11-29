#include "binary_trees.h"

/**
 * binary_tree_balance - The funct measures the balance factor of a BT.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 * Return: 0 if the tree is NULL, the balance factor otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - The funct measures the height of a BT.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if the tree is NULL, the node height otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

