#include "binary_trees.h"

/**
 * is_full_recursive - The funct checks if a BT is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - The funct checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the BT is full 0 if NULL or otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

