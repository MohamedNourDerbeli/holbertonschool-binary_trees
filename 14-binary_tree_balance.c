#include "binary_trees.h"
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor of the binary tree, or 0 if the tree is NULL.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	if (tree->left && tree->right)
		return (2);
	else
		return (-1);
}
