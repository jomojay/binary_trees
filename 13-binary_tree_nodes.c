#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with kids
 * @tree: the tree
 *
 * Return: size_t count or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* check for tree */
	if (!tree)
		return (0);
	/* if node has babies it counts */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (0);
}
