#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the
 * right child of another node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the newly created node, or NULL on failure.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_right;

	if (parent == NULL)
		return (NULL);
	insert_right = binary_tree_node(parent, value);
	if (insert_right == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = insert_right;
		insert_right->right = parent->right;
	}
	parent->right = insert_right;

	return (insert_right);
}
