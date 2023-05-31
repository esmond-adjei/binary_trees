#include "binary_trees.h"

/**
 * bianry_tree_delete - deltes an entire tree
 * @tree: pointer to the root of the tree to delete
 * Return - NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
