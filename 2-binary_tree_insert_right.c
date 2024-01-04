#include "binary_trees.h"
/**
 * binary_tree_insert_right - add node as right child m'dude
 * @parent: the parent of the node to be born
 * @value: the value to put in there
 * Return: ptr to baby node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* declarations */
	binary_tree_t *node;

	/* check for parent */
	if (!parent)
		return (NULL);
	/* calloc for node */
	node = calloc(1, sizeof(binary_tree_t));
	/* check for calloc fail */
	if (!node)
		return (NULL);
	/* assign some things */
	node->n = value;
	node->parent = parent;
	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
