#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse in postorder
 * @tree: the tree
 * @func: the func to call
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check for tree and func */
	if (!tree || !func)
		return;
	/* call on left */
	binary_tree_postorder(tree->left, func);
	/* call on right */
	binary_tree_postorder(tree->right, func);
	/* call on root */
	func(tree->n);
}
