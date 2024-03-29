#include "binary_trees.h"
/**
 * binary_tree_depth - Calculates the depth of a node in a binary tree.
 * @tree: Pointer to the node.
 * Return: Depth of the node, or 0 if the node or its parent is NULL.
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (binary_tree_depth(tree->parent) + 1);
}
