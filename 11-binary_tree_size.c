#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Size of the binary tree, or 0 if the tree is NULL.
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int dist = 0;

	if (tree == NULL)
		return (0);
	dist += 1;
	dist += binary_tree_size(tree->left);
	dist += binary_tree_size(tree->right);
	return (dist);
}
