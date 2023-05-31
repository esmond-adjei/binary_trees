#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal.
 * @tree: pointer to the nroot node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
int helper(const binary_tree_t *node, void (*func)(int), int level);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;

	if (tree == NULL || func == NULL)
		return;

	level = 0;
	while (helper(tree, func, level))
		level++;
}

/**
 * helper - helper funciton for the level-order traversal.
 * @node: pointer to current node.
 * @func: pointer to a funciton call for each node.
 * @level: current level in the tree.
 * Return - 1 if there are nodes at the next level, 0 otherwise.
 */
int helper(const binary_tree_t *node, void (*func)(int), int level)
{
	if (node == NULL)
		return (0);
	
	if (level == 0)
	{
		func(node->n);
		return (node->left != NULL || node->right != NULL);
	}

	int left = helper(node->left, func, level - 1);
	int right = helper(node->right, func, level - 1);

	return (left || right);
}
