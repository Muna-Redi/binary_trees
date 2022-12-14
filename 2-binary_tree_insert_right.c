#include "binary_trees.h"

/**
* binary_tree_insert_right - Adds a right child to the parent.
* if right child already exist, it becomes the parent of the
* existing right child of its parent
* @parent: parent node to which right child is to be added
* @value: integer in the added right child
* Return: the parent node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL || value == '\0')
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->right = NULL;
	right_node->left = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
		right_node->parent = parent;
	}
	else
	{
		parent->right = right_node;
		right_node->parent = parent;
	}

	return (right_node);
}
