#include "binary_trees.h"

/**
 * binary_tree_size - counts the total number of nodes in a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return - totla number of nodes in the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * is_complete_recursive - recursively checks completeness.
 * @tree: pointer to the current node.
 * @index: index of the current node.
 * @node_count: total number of nodes in the tree.
 */
int is_complete_recursive(const binary_tree_t *tree,
		int index, int node_count)
{
	if (tree == NULL)
		return (1);

	if (index >= node_count)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, node_count)
		&& is_complete_recursive(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete.
 * @tree: pointer to the root node of the tree.
 * Return - 1: is complete; 0: is not complete.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete_recursive(tree, 0, binary_tree_size(tree)));
}
