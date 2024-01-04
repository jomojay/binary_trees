#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: ptr to the parent of the node to create
 * @value: the value to add at the node
 *
 * Return: ptr to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declarations */
	binary_tree_t *node = NULL;

	/* calloc for the node */
	node = calloc(1, sizeof(binary_tree_t));
	/* check for calloc fail */
	if (!node)
		return (NULL);
	/* assign stuff */
	node->parent = parent;
	node->n = value;
	return (node);
}
