#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to root node of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	tree_size = binary_tree_size(tree->left) \
		    + binary_tree_size(tree->right);

	return (tree_size + 1);
}
