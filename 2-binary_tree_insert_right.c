#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *insert_right = malloc(sizeof(binary_tree_t));

	if (insert_right== NULL || parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = insert_right;
		insert_right->right = parent->right;
	}
	parent->right = insert_right;
	insert_right->parent = parent;
	insert_right->n = value;

	return (insert_right);
}