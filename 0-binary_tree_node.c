#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of the node to be created
 * @value: value in the newly created node
 * Return - pointer to new node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_bt_node;

	new_bt_node = malloc(sizeof(binary_tree_t));
	if (new_bt_node == NULL)
		return (NULL);

	new_bt_node->parent = parent;
	new_bt_node->n = value;
	new_bt_node->left = NULL;
	new_bt_node->right = NULL;

	return (new_bt_node);
}
