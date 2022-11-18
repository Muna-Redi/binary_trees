#include "binary_trees.h"

/**
* binary_tree_node - cretes or adds a new node to the tree
* @parent: parent node of the tree to be created
* @value: integer in the creted node
* Return: the created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;

	if (parent == NULL)
	{
		parent = node;
		return (parent);
	}

	node->parent = parent;
	return (node);
}
