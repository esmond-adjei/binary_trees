#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right of parent
 * @parent: parent node to be assigned a right node
 * @value: value of the new node
 *
 * Return - pointer to the new right node of parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);

	/* if parent has right child */
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
