#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_helper - recursively checks if a binary tree is BST.
 * @tree: pointer to the current node of the tree to traverse.
 * @min: minimum value allowed for nodes in the subtree.
 * @max: maxmimum value allowed for nodes in the subtree.
 */
void is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_helper(tree->left, min, tree->n)
		&& is_bst_helper(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid binary search tree.
 * @tree: pointer to the root node of the tree.
 * Return - 1: is a valid BST; 0: otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
