#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root (has no parent).
 * @node: Pointer to the node to check.
 * Return: 1 if the node is a root, 0 otherwise.
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	return (1);
}
