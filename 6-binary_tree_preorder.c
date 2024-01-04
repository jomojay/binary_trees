#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: the tree
 * @func: the fucntion call to make
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func are NULL, return */
	if (!tree || !func)
		return;
	/* call func on the value */
	func(tree->n);
	/* call b_t_p on the left child */
	binary_tree_preorder(tree->left, func);
	/* call b_t_p on the right child */
	binary_tree_preorder(tree->right, func);
}
