#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse tree inorder
 * @tree: the tree
 * @func: a function call to make
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* check for tree and func */
	if (!func || !tree)
		return;
	/* call b_t_i on left */
	binary_tree_inorder(tree->left, func);
	/* call b_t_i on tree root */
	func(tree->n);
	/* call it on right */
	binary_tree_inorder(tree->right, func);
}
