#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: Pointer to the node to find the sibling for.
 * Return: Pointer to the sibling node, or NULL if no sibling or no parent.
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node && node->parent->right)
	{
		return (node->parent->left);
	}
	if (node->parent->left == node && node->parent->left)
	{
		return (node->parent->right);
	}
	return (NULL);
}
