#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at
 * least one child in a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Number of internal nodes in the
 * binary tree, or 0 if the tree is NULL.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int dist = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		dist += 1;

	dist += binary_tree_nodes(tree->left);
	dist += binary_tree_nodes(tree->right);

	return (dist);
}
