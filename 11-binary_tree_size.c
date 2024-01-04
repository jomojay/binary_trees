#include "binary_trees.h"
/**
 * binary_tree_size - get size of binary tree
 * @tree: the tree
 *
 *	Return: size_t size or NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* gotta have a tree */
	if (!tree)
		return (0);
	/* else, add the sizes add root */
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
