#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node's value.
 *
 * Description: This function recursively traverses a binary tree using
 * pre-order traversal and applies the provided function to each node's value.
 * If the tree or the function is NULL, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)){
	int n;

	if (tree == NULL || func == NULL)
		return;
	n = tree->n;
	binary_tree_inorder(tree->left, func);
	func(n);
	binary_tree_inorder(tree->right, func);
}
