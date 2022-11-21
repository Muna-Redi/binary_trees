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
	if (node == NULL || value == '\0')
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
