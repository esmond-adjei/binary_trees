#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at lease 1 child in a binary tree.
 * @tree: pointer to root node of the tree.
 * Return - number of nodes in tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count;

	if (tree == NULL)
		return (0);

	nodes_count = binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (nodes_count + 1);

	return (0);
}
