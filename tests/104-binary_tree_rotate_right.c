#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs right-rotation on a binary tree.
 * @tree: pointer to the root node of the binary tree.
 * Return - pointer to the new root node of the rotated binary tree.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	new_root = tree->left;
	tree->left = new_root->right;

	if (new_root->right != NULL)
		new_root->right->parent = tree;

	new_root->right = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
