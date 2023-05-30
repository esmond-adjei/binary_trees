#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node to the left of parent.
 * @parent: pointer to parent node ito insert the left-child in.
 * @value: value in the newly created node.
 * Return - pointer to new node or NULL if failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
		return (NULL);

	/* check if parent's left exists */
	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}

	parent->left = left_node;
	
	return (left_node);
}
