#include "binary_trees.h"
/**
 * binary_tree_is_full - check if tree is full which means every node has 0
 * or 2 children.
 * @tree: the tree to check
 *
 * Return: 1 if full, 0 otherwise?
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check for tree */
	if (!tree)
		return (0);
	/* if we've exhausted our branches */
	if (!tree->left && !tree->right)
		return (1);
	/* return true or false- true only if both are */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
