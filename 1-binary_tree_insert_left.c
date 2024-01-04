#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a a node as the left-child of another node
 * @parent: ptr to parent of node to create
 * @value: to insert in new node
 *
 * Return: ptr to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* declarations */
	binary_tree_t *node = NULL;

	/* check that parent is not NULL */
	if (!parent)
		return (NULL);
	/* calloc for node */
	node = calloc(1, sizeof(binary_tree_t));
	/* check for calloc fail */
	if (!node)
		return (NULL);
	/* assign things */
	node->n = value;
	node->parent = parent;
	/* check for existing left child */
	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
