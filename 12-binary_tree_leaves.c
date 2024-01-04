#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the leaves
 *
 * Return: size_t leaves count or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* check for tree */
	if (!tree)
		return (0);
	/* if there are no children on this node, it's a leaf */
	if (!tree->left && !tree->right)
		return (1);
	/* recursive call until !tree->left or ->right */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
