#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the binary tree, or 0 if the tree is NULL.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int dist2 = 0, dist1 = 0;

	if (tree == NULL)
		return (0);

	dist1 = binary_tree_height(tree->left);
	dist2 = binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	if (dist1 >= dist2)
		return (dist1 + 1);
	else
		return (dist2 + 1);
}
