#include "binary_trees.h"
/**
 * binary_tree_height - get the height of tree
 * @tree: the tree to measure
 *Return: size_t height or 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declarations */
	size_t lh, rh;

	/* tree is null or a loner */
	if (!tree || (!tree->left && !tree->right))
		return (0);
	/* measure both */
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	/* compare and return tallest */
	return ((lh > rh ? lh : rh) + 1);
}
