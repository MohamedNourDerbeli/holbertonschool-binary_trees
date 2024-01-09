#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the binary tree, or 0 if the tree is NULL.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int dist2, dist1;

	if (tree == NULL)
		return (0);

	dist1 = binary_tree_height(tree->left);
	dist2 = binary_tree_height(tree->right);

	if (dist1 > dist2)
		return (dist1 + 1);
	else
		return (dist2 + 1);
}
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor of the binary tree, or 0 if the tree is NULL.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int ri_ght, le_ft;

	if (tree == NULL)
		return (0);

	le_ft = binary_tree_height(tree->left);
	ri_ght = binary_tree_height(tree->right);
	return (le_ft - ri_ght);
}
