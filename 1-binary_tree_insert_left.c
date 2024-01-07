#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as
 * the left child of another node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 * Return: Pointer to the newly created node, or
 * NULL on failure.
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_left = malloc(sizeof(binary_tree_t));

	if (insert_left == NULL || parent == NULL)
		return (NULL);
	insert_left->parent = parent;
	insert_left->n = value;
	insert_left->left = NULL;
	insert_left->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = insert_left;
		insert_left->left = parent->left;
	}
	if (parent->right != NULL)
	{
		parent->right->parent = insert_left;
		insert_left->right = parent->right;
	}
	parent->left = insert_left;

	return (insert_left);
}
