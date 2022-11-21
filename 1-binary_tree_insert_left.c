#include "binary_trees.h"

/**
* binary_tree_insert_left - Adds a left child to the parent.
* if left child already exist, it becomes the parent of the
* existing left child of its parent
* @parent: parent node to which left child is to be added
* @value: integer in the added left child
* Return: the parent node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
